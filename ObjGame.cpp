#include "ObjGame.h"

ObjGame::ObjGame(const int x, const int y, const hinhE id) : HienThi(x,y) {
	this->id = id;
}

int ObjGame::getId(void) {
	return id;
}

void ObjGame::hien(void) {
	SDL_Rect vitri;
	vitri.x = x;
	vitri.y = y;
	vitri.w = vitri.h =50;
	texture->hienAnh(id,vitri);
}
