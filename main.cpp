#include <iostream>
using namespace std;
#include <cstdlib>

#include "KhoiTao.h"
#include "CuaSo.h"
#include "InPut.h"
#include "QuanLyTextu.h"
#include "Tinh.h"
#include "GameStates.h"

int main(int sl,char** cac_xau){
	cout << "Hello DayHop" <<endl;
#ifdef DEBUG
	system("dir");
#endif
	KhoiTao dohoa;
	if(dohoa.getLoi()) {
		cout << "Loi khi khoi tao " << endl;
		return 1;
	}
	CuaSo cuaso(TEN, SIZEW, SIZEH);
	InPut sukien;
	QuanLyTextu* hienanh = QuanLyTextu::KhoiTao(cuaso.getBoDem());
	cout <<"Hoan thanh khoi tao do hoa " << endl;
	Tinh tuong(50,50,HOP);
	GameStates map;
	map.load("./map/test.map");
	while(!sukien.getThoat()) {
		sukien.capNhat();
		if(sukien.getZ()) {
			cout << "Get Z" <<endl;
		}
		hienanh->hienAnh();
		tuong.hien();
		cuaso.hienThi();
	}
	QuanLyTextu::GiaiPhongBoNho();
	return 0;
}
