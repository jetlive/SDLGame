#ifndef __CPLIB__
#define __CPLIB__

#ifdef __linux__
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#define PAUSE system("read -p \"$*\"");
#endif

#ifdef _WIN32
#icnldue "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#define PAUSE system("pause");
#endif


#define IMG_flag IMG_INIT_PNG
#define FPS 60
#define TEN "Hello Game C++"
#define SIZEW 600
#define SIZEH 600
#define FICON "./img/icon.png"
#define FHINH "./img/hinh.png"
#define FNEN "./img/nen.png"
#define FFONT "./img/kieu_chu.ttf"
#define FMAP "./map/"
#define FINDEX "./map/index.map"
#define TENMAP "./map/ten_map.map"

#define SOLUONG 5
#define SIZE 50
#define SIZEHIEN 50
#define HANG 12
#define COT 12
#define FONTSIZE 50

typedef enum huongE{
	LEN, PHAI, YEN, TRAI, XUONG,
} huongE;

typedef enum hinhE{
	TUONG, HOP, DICH, DUNG, NGUOI, NEN
} hinhE;

typedef enum loailoiE{
	SDL, IMG, TTF
} loailoiE;

#endif
