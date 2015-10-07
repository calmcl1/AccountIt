LIBS=`pkg-config --cflags --libs Qt5Core Qt5Widgets`
EXEC_NAME=123.exe

all:
	g++ accounting.cpp -std=c++11 $(LIBS) -fPIC -Wall -o $(EXEC_NAME)

clean:
	rm -f $(EXEC_NAME)
