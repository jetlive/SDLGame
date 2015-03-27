#include "BanPhim.h"

BanPhim::BanPhim(void){
	huong = YEN;
	z = esc = false;
}

huongE BanPhim::getHuong(void) {
	huongE tmp = huong;
	huong = YEN;
	return tmp;
}

bool BanPhim::getZ(void) {
 if (!z) return false;
	 else return !(z = false);
}

bool BanPhim::getESC(void) {
 if (!esc) return false;
	 else return !(esc = false);
}

void BanPhim::capNhat(const SDL_Event& tmp) {
	if (tmp.type == SDL_KEYDOWN)
		switch (tmp.key.keysym.sym)
		{
		case SDLK_UP: huong = LEN; break;
		case SDLK_RIGHT: huong = PHAI; break;
		case SDLK_DOWN: huong = XUONG; break;
		case SDLK_LEFT: huong = TRAI; break;
		case SDLK_z:z = true; break;
		case SDLK_ESCAPE:esc = true; break;
		default:
			huong = YEN;
			break;
		}
}
