#include "GameStates.h"

void GameStates::load(const char* tenMap) {
	
		ifstream fileMap(tenMap,ios::in);
		if(! fileMap.is_open()) {
			setLoi();
			thongBao("Loi mo file");
			std::cout << tenMap << endl;
			return;
		}
		 fileMap >> max;
		cout << endl << "Gt " << map << endl;
		 fileMap >> max;
		cout << endl << "Gt " << map << endl;
		 fileMap >> max;
		cout << endl << "Gt " << map << endl;
		 fileMap >> max;
		cout << endl << "Gt " << map << endl;
		 fileMap.close();
}

void GameStates::run(InPut& dieuHuong) {
	
}
