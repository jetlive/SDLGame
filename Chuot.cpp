#include "Chuot.h"

Chuot::Chuot(void) {
	chuot = false;
}

void Chuot::capNhat(const SDL_Event& tmp) {
	if (tmp.button.type == SDL_MOUSEBUTTONDOWN) chuot = true;
}

bool Chuot::getChuot(void) {
	if (!chuot) return false;
	chuot = false;
	return true;
}
