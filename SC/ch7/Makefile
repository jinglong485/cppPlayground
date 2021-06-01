AbstractOdeSolver.o : AbstractOdeSolver.cpp AbstractOdeSolver.hpp
	g++ -c -O AbstractOdeSolver.cpp
ForwardEulerSolver.o : ForwardEulerSolver.cpp AbstractOdeSolver.hpp
	g++ -c -O ForwardEulerSolver.cpp
exe7.3.2.o : exe7.3.2.cpp
	g++ -c -O exe7.3.2.cpp
exe7.3.2 : AbstractOdeSolver.o ForwardEulerSolver.o exe7.3.2.o
	g++ -O -o exe7.3.2 AbstractOdeSolver.o ForwardEulerSolver.o exe7.3.2.o
