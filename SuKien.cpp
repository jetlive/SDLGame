#include "SuKien.h"

SuKien::SuKien(void) {
	thoat = false;
}

void SuKien::capNhat(const SDL_Event& sukien) {
		if (sukien.type == SDL_QUIT) thoat = true;
}

bool SuKien::getThoat(void) {
	if (!thoat) return false;
	else return !(thoat = false);
}
