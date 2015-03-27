#include "CuaSo.h"

CuaSo::CuaSo(const char* ten,const int& w, const int& h, const int x, const int y):Loi() {

	//Tao cua so
	thongBao("Khoi tao cua so");
	cua_so = SDL_CreateWindow(ten, x, y, w, h, SDL_WINDOW_SHOWN);
	if (cua_so == NULL) {
		setLoi(SDL, 1, "Loi khoi tao cua so");
		return;
	}
	else thongBao("Hoan thanh khoi tao cua so");

	//Load icon
	thongBao("Load Icon");
	icon = IMG_Load(FICON);
	if (icon == NULL) {
		setLoi(IMG, 1, "Loi load Icon");
		return;
	}
	else SDL_SetWindowIcon(cua_so, icon);
	thongBao("Hoan thanh load icon");

	//Tao bo dem renderer
	thongBao("Tao bo dem renderer");
	bo_dem = SDL_CreateRenderer(cua_so, -1, SDL_RENDERER_ACCELERATED);
	if (bo_dem == NULL) {
		setLoi(SDL, 1, "Khong the tao bo dem renderer");
		return;
	}
	else thongBao("Hoan thanh tao bo dem do hoa");
	SDL_SetRenderDrawColor(bo_dem, 0, 0, 0, 0);
	thongBao("Tao texture va doi tuong hien thi");
	HienThi::SetTexture(QuanLyTextu::KhoiTao(bo_dem));
	time = SDL_GetTicks();
}

CuaSo::~CuaSo(void) {
	SDL_FreeSurface(icon);
	thongBao("Xoa icon");
	SDL_DestroyWindow(cua_so);
	thongBao("Xoa cua so");
	SDL_DestroyRenderer(bo_dem);
	thongBao("Xoa bo dem");
}

void CuaSo::hienThi(void) {
	SDL_RenderPresent(bo_dem);
	int tmp = 1000.f / FPS - SDL_GetTicks() + time;
	if(tmp > 0) {
		SDL_Delay(tmp);
	}
	SDL_RenderClear(bo_dem);
	time = SDL_GetTicks();
}

SDL_Renderer* CuaSo::getBoDem(void) {
	return bo_dem;
}
