#ifndef __TINH__
#define __TINH__

#include "CPLib.h"
#include "ObjGame.h"

class Tinh : public ObjGame {
	public:
		Tinh(const int = 0, const int = 0, const hinhE = NEN);
		virtual huongE tuongTac(const huongE, const int&);
		virtual void capNhat(void);
};

#endif
