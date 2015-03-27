#ifndef __CUASO__
#define __CUASO__

#include "CPLib.h"
#include "Loi.h"
#include "QuanLyTextu.h"
#include "HienThi.h"

class CuaSo:public Loi {
public:
	CuaSo(const char*, const int&, const int&,const int=100,const int=100); //Tao cua so
	~CuaSo(void);
	void hienThi(void);
	SDL_Renderer* getBoDem(void);
private:
	unsigned int time;
	SDL_Window* cua_so = NULL;
	SDL_Renderer* bo_dem = NULL;
	SDL_Surface* icon = NULL;
	int w, h;
};

#endif
