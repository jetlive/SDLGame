#include "HienThi.h"
	 QuanLyTextu* HienThi::texture = QuanLyTextu::KhoiTao();

void HienThi::SetTexture( QuanLyTextu* tmp) {
	texture = tmp;
}

HienThi::HienThi(const int x, const int y) {
	this->x = x;
	this->y = y;
}
