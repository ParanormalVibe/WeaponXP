#include "cwmods.h"
#include "dllmain.h"

static bool modInitFinished = false;
EXPORT void ModInitialize() {
	if (modInitFinished)
		return;
	LoadLibraryA("Mods/WeaponXP.cwmod");
	modInitFinished = true;
}
