#include "QuanLyTextu.h"

	QuanLyTextu* QuanLyTextu::con_tro = NULL;

	QuanLyTextu* QuanLyTextu::KhoiTao(SDL_Renderer* vao) {
		if (con_tro == NULL) con_tro = new QuanLyTextu(vao);
		return con_tro;
	}

	QuanLyTextu* QuanLyTextu::KhoiTao(void) {
		return con_tro;
	}

	QuanLyTextu::QuanLyTextu(SDL_Renderer* vao) :Loi() {
		man_hinh = vao;
		tmp = NULL;

		//Load anh nen
		thongBao("Thuc hien load anh nen");
		SDL_Surface* tmp = IMG_Load(FNEN);
		if (tmp == NULL) setLoi(IMG, 1, "Load anh nen");
		hinh_nen = SDL_CreateTextureFromSurface(man_hinh, tmp);
		if (hinh_nen == NULL){
				setLoi(SDL, 1, "Khon the doi dinh dang anh");
		return;
		}
		SDL_FreeSurface(tmp);
		thongBao("Hoan thanh load anh nen");

		tmp = IMG_Load(FHINH);
		if (tmp == NULL){
			setLoi(IMG, 2, "Loi load file hinh anh ", FHINH);
			return;
		}
		anh = SDL_CreateTextureFromSurface(man_hinh, tmp);
		if (anh == NULL){
			setLoi(SDL, 1, "Loi dinh dang vung nho");
			return;
		}
		SDL_FreeSurface(tmp);
		thongBao("Hoan thanh load file hinh anh");
		for (uint8_t i = 0; i < SOLUONG; i++){
			vitri[i].x = i*SIZE;
			vitri[i].y = 0;
			vitri[i].w = vitri[i].h = SIZE;
		}
		thongBao("Hoan thanh load vi tri anh");
		font_chu = TTF_OpenFont(FFONT, FONTSIZE);
		if (font_chu == NULL){
			setLoi(TTF, 2, "Loi load file font chu ", FFONT);
			return;
		}
		thongBao("Hoan thanh load font chu ");
	}

	void QuanLyTextu::GiaiPhongBoNho(void){
		if (con_tro == NULL) return;
		delete con_tro;
	}

	QuanLyTextu::~QuanLyTextu() {
		SDL_FreeSurface(tmp);
		thongBao("Xoa bo dem");
		SDL_DestroyTexture(anh);
		thongBao("Xoa vung nho anh");
		SDL_DestroyTexture(hinh_nen);
		thongBao("Xoa bo dem hinh nen");
		SDL_DestroyTexture(chu);
		thongBao("Xoa bo nho chung");
		TTF_CloseFont(font_chu);
		thongBao("Gia phong nhung nho font chu");
		thongBao("Hoan thanh giai phong bo nho hinh anh");
	}

	void QuanLyTextu::hienAnh(const hinhE& id, const SDL_Rect& vitri) {
		if (id == NEN) return;
		SDL_RenderCopy(man_hinh, anh, &this->vitri[(int)id], &vitri);
	}

	void QuanLyTextu::hienAnh(void) {
		SDL_RenderCopy(man_hinh,hinh_nen,NULL,NULL);
	}


	void QuanLyTextu::hienAnh(const char* xau, const SDL_Color& color, SDL_Rect& vitri) {
		tmp = TTF_RenderUTF8_Blended(font_chu, xau, color);
		if (tmp == NULL) {
			setLoi(TTF, 1, "Loi tao surface cho xau");
			exit(1);
		}

		chu = SDL_CreateTextureFromSurface(man_hinh, tmp);
		if (chu == NULL) {
			setLoi(TTF, 1, "Loi tao render cho chu");
			exit(1);
		}

		vitri_chu.x = vitri_chu.y = 0;
		vitri_chu.w = tmp->w;
		vitri_chu.h = tmp->h;
		vitri.h = 40;
		vitri.w = int(vitri_chu.w * 40 / vitri_chu.h);

		SDL_RenderCopy(man_hinh, chu, &vitri_chu, &vitri);
		SDL_FreeSurface(tmp);
		SDL_DestroyTexture(chu);
	}
