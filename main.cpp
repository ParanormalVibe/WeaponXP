#include "cwmods/cwmods.h"

class WeaponXPWrapper : GenericMod {
	virtual void Initialize() override {
		LoadLibraryA("Mods/WeaponXP.cwmod");
	}
};

EXPORT WeaponXPWrapper* MakeMod() {
	return new WeaponXPWrapper();
}
