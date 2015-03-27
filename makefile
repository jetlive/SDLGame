CXX = g++
CFLAGS = -std=c++11 -c -O2 -Wall
LFLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf
ODIR = ./release
EXE = DayHop-rc

DEBUG = 0
ifeq ($(DEBUG),1)
    CFLAGS = -std=c++11 -c -Wall -g -D DEBUG
	ODIR = ./debug
	EXE = DayHop-bug
endif

_OBJS = main.o Loi.o KhoiTao.o CuaSo.o SuKien.o Chuot.o BanPhim.o InPut.o QuanLyTextu.o \
				HienThi.o ObjGame.o Tinh.o GameStates.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

all:$(OBJS)
	$(CXX) $(OBJS) -o $(EXE) $(LFLAGS)

$(ODIR)/main.o: main.cpp  CPLib.h KhoiTao.h InPut.h QuanLyTextu.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)
	
$(ODIR)/Loi.o: Loi.cpp Loi.h CPLib.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)
	
$(ODIR)/KhoiTao.o: KhoiTao.cpp KhoiTao.h Loi.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)
	
$(ODIR)/CuaSo.o: CuaSo.cpp CuaSo.h Loi.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)

$(ODIR)/SuKien.o: SuKien.cpp SuKien.h Loi.h CPLib.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)
	
$(ODIR)/Chuot.o: Chuot.cpp Chuot.h Loi.h CPLib.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)
	
$(ODIR)/BanPhim.o: BanPhim.cpp BanPhim.h Nhap.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)

$(ODIR)/InPut.o: InPut.cpp InPut.h CPLib.h SuKien.h Chuot.h BanPhim.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)
	
$(ODIR)/QuanLyTextu.o: QuanLyTextu.cpp QuanLyTextu.h Loi.h CPLib.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)

$(ODIR)/HienThi.o: HienThi.cpp HienThi.h QuanLyTextu.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)

$(ODIR)/ObjGame.o: ObjGame.cpp ObjGame.h CPLib.h HienThi.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)

$(ODIR)/Tinh.o: Tinh.cpp Tinh.h ObjGame.h CPLib.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)

$(ODIR)/GameStates.o: GameStates.cpp GameStates.h Loi.h
	$(CXX) $< -o $@ $(CFLAGS) $(LFLAGS)

clean:
	rm -f ./*.gch ./*.o ./debug/* ./release/* ./DayHop-rc ./DayHop-bug
