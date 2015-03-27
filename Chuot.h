#ifndef __CHUOT__
#define __CHUOT__

#include "Nhap.h"
#include "CPLib.h"

class Chuot :virtual public Nhap {
public:
	Chuot(void);
	void capNhat(const SDL_Event&);
	bool getChuot(void);
private:
	bool chuot;
};

#endif
