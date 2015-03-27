#ifndef __LOI__
#define __LOI__

//#include <cstdarg>
#include <iostream>
#include <cstdlib>
using namespace std;

#include "Loi.h"
#include "CPLib.h"

class Loi{
public:
	bool getLoi(void); //Set trang thai co loi
protected:
	Loi(void); //Khoi tao voi trang thai khong loi
	void setLoi(const loailoiE& loai, const int&, ...); //Set trang thai co loi va hien thong bao
	void setLoi(void);
	void thongBao(const char*); //Hien thong bao len man hinh
private:
	bool loi;
};

#endif
