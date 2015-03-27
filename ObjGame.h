#ifndef __OBJGAME__
#define __OBJGAME__

#include "CPLib.h"
#include "HienThi.h"

class ObjGame : public HienThi {
	public:
		ObjGame(const int = 0, const int = 0, const hinhE = NEN);
		virtual huongE tuongTac(const huongE, const int&) = 0;
		virtual void capNhat(void) = 0;
		virtual void hien(void);
		int getId(void);
	protected:
		hinhE id;
};

#endif
