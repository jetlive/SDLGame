#include "InPut.h"

InPut::InPut(void):cua_so(),chuot() {
};

void InPut::capNhat(void) {
	while(SDL_PollEvent(&sukien)) {
		cua_so.capNhat(sukien);
		chuot.capNhat(sukien);
		banphim.capNhat(sukien);
	}
}

bool InPut::getThoat(void) {
	return cua_so.getThoat();
}

bool InPut::getChuot(void) {
	return chuot.getChuot();
}


huongE InPut::getHuong(void) {
	return banphim.getHuong();
}

bool InPut::getZ(void) {
	return banphim.getZ();
}

bool InPut::getESC(void) {
	return banphim.getESC();
}
