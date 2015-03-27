#include "Tinh.h"

Tinh::Tinh(const int x, const int y, const hinhE id) : ObjGame(x,y,id) {
}

huongE Tinh::tuongTac(const huongE huong, const int& ma) {
	return huongE(4-int(huong));
}

void Tinh::capNhat(void) {
}
