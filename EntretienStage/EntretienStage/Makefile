CC = g++
CFLAGS = -Wall -std=c++11 -I Lib_Get_Min_Max/include -Wextra
SRC_DIR = Lib_Get_Min_Max/src
INC_DIR = Lib_Get_Min_Max/include

all: TestLib

TestLib: Test.cpp $(SRC_DIR)/Lib.cpp $(INC_DIR)/Lib.hpp
	$(CC) $(CFLAGS) -o TestLib Test.cpp $(SRC_DIR)/Lib.cpp -I$(INC_DIR)

clean:
	rm -f TestLib
