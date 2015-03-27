#include "KhoiTao.h"

KhoiTao::KhoiTao(void) :Loi() {

	//SDL2
	thongBao("Khoi tao SDL2");
	if (SDL_Init(SDL_INIT_VIDEO)) {
		setLoi(SDL, 1, "Loi khoi tao SDL ");
		return;
	}
	thongBao("Hoan thanh khoi tao SDL2");

	//SDL2_Iamge
	thongBao("Khoi tao SDL2_Image");
	if (IMG_Init(IMG_flag) != IMG_flag) {
		setLoi(SDL, 1, "Loi khoi tao SDL_Image ");
		return;
	}
	thongBao("Hoan thanh khoi tao SDL2_Image ");

	//SDL2_Ttf
	thongBao("Khoi tao SDL2_Ttf");
	if (TTF_Init() == -1) {
		setLoi(SDL, 1, "Loi khoi tao SDL_Ttf ");
		return;
	}
	thongBao("Hoan thanh khoi tao SDL2_Ttf ");

	//Ket thuc load thu vien
	thongBao("Hoan thanh khoi tao do hoa ");

	//Lay so man hinh
	thongBao("Kiem tra man hinh");
	if(SDL_GetNumVideoDisplays()<1) {
		setLoi(SDL,1,"Khong co man hinh ");
		return;
	}
	SDL_DisplayMode man_hinh;
	if(SDL_GetCurrentDisplayMode(0, &man_hinh)) {
		setLoi(SDL,1,"Khong the lay thong tin man hinh ");
		return;
	};
	w = man_hinh.w;h = man_hinh.h;
	cout << "Thong so man hinh" << endl;
	cout << "Format " << man_hinh.format << endl;
	cout << "W " << man_hinh.w << endl;
	cout << "H " << man_hinh.h << endl;
	cout << "Tan So " << man_hinh.refresh_rate << "HZ" << endl;
	thongBao("Hoan thanh kiem tra man hinh");
}

int KhoiTao::getW(void) {
	return w;
}

int KhoiTao::getH(void) {
	return h;
}

KhoiTao::~KhoiTao(void) {
		TTF_Quit();
		IMG_Quit();
		SDL_Quit();
		thongBao("Hoan thanh thoat do hoa");
}
