MatrixClass.o : MatrixClass.cpp MatrixClass.hpp
	g++ -c -O MatrixClass.cpp
exe6.2.o : exe6.2.cpp
	g++ -c -O exe6.2.cpp
exe6.2	: MatrixClass.o exe6.2.o
	g++ -O -o exe6.2 exe6.2.o MatrixClass.o
