#ifndef __KHOITAO__
#define __KHOITAO__

#include <iostream>
using namespace std;

#include "CPLib.h"
#include "Loi.h"

class KhoiTao :public Loi {
public:
	KhoiTao(void);
	~KhoiTao(void);
	int getW(void);
	int getH(void);
private:
	int w, h;
};

#endif
