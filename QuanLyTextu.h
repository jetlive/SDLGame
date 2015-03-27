#ifndef __QUANLYTEXTU__
#define __QUANLYTEXTU__

#include "CPLib.h"
#include "Loi.h"

	class QuanLyTextu :public Loi{
	public:
		static QuanLyTextu* KhoiTao(SDL_Renderer*);
		static QuanLyTextu* KhoiTao(void);
		static void GiaiPhongBoNho(void);
		void hienAnh(const hinhE&, const SDL_Rect&);
		void hienAnh(void);
		void hienAnh(const char*, const SDL_Color&, SDL_Rect&);
	private:
		~QuanLyTextu(void);
		QuanLyTextu(SDL_Renderer*);
		SDL_Renderer* man_hinh;
		SDL_Surface * tmp;
		SDL_Texture * anh;
		SDL_Texture * hinh_nen;
		SDL_Rect vitri[SOLUONG];
		TTF_Font * font_chu;
		SDL_Texture * chu;
		SDL_Rect vitri_chu;
		static QuanLyTextu* con_tro;
	};

#endif
