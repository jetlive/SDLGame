#ifndef __SUKIEN__
#define __SUKIEN__

#include "CPLib.h"
#include "Nhap.h"

class SuKien:virtual public Nhap {
	public:
		SuKien(void);
		void capNhat(const SDL_Event&);
		bool getThoat(void);
	private:
		bool thoat;
};

#endif
