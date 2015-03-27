#ifndef __BANPHIM__
#define __BANPHIM__

#include <iostream>
#include "Nhap.h"

class BanPhim :virtual public Nhap {
public:
	BanPhim(void);
	void capNhat(const SDL_Event&);
	huongE getHuong(void);
	bool getZ(void);
	bool getESC(void);
private:
	huongE huong;
	bool z, esc;
};


#endif
