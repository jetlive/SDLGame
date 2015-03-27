#ifndef __INPUT__
#define __INPUT__

#include "CPLib.h"
#include "SuKien.h"
#include "Chuot.h"
#include "BanPhim.h"

class InPut {
	public:
		InPut(void);
		void capNhat(void);
		bool getThoat(void);
		bool getChuot(void);
		huongE getHuong(void);
		bool getZ(void);
		bool getESC(void);
	private:
		SDL_Event sukien;
		SuKien cua_so;
		Chuot chuot;
		BanPhim banphim;
};

#endif
