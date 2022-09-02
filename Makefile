programa: main.o derivada.o newtonraphson.o evalua.o
	g++ -o programa main.o derivada.o newtonraphson.o evalua.o

main.o: main.cpp funciones.h
	g++ -c main.cpp
	
derivada.o: derivada.cpp funciones.h
	g++ -c derivada.cpp
	
newtonraphson.o: newtonraphson.cpp funciones.h
	g++ -c newtonraphson.cpp
	
evalua.o: evalua.cpp funciones.h
	g++ -c evalua.cpp
	
clean:
	rm -f programa *.o
