#ifndef __HIENTHI__
#define __HIENTHI__

#include "QuanLyTextu.h"

class HienThi {
	public:
		HienThi(const int = 0, const int = 0);
		virtual void hien(void) = 0;
		static void SetTexture(QuanLyTextu*);
	protected:
		int x,y;
		static QuanLyTextu* texture;
};

#endif
