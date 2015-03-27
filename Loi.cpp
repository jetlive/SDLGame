#include "Loi.h"

Loi::Loi(void) {
	loi = false;
}

void Loi::setLoi(const loailoiE& loai, const int& sl, ...) {
	va_list list;
	va_start(list, sl);
	for (int i = 0; i < sl; i++)
		cout << va_arg(list, char*);
	va_end(list);
	loi = true;
	switch (loai) {
		case SDL:cout << SDL_GetError() << endl; break;
		case IMG:cout << IMG_GetError() << endl; break;
		default: cout << TTF_GetError() << endl;
			break;
	}
#ifdef DEBUG
		PAUSE
#endif
}

void Loi::setLoi(void) {
	loi = true;
}

bool Loi::getLoi(void) {
	if (!loi) return false;
	else return !(loi = false);
}

void Loi::thongBao(const char* ten) {
	cout << ten << endl;
}
