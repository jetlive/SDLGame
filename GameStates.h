#ifndef __GAMESTATES__
#define __GAMESTATES__

#include <fstream>
using namespace std;

#include "Loi.h"
#include "CPLib.h"
#include "InPut.h"
#include "ObjGame.h"

class GameStates : public Loi {
	public:
		void load(const char*);
		void run(InPut&);
	private:
		ObjGame** map;
		int max,sl;
};

#endif
