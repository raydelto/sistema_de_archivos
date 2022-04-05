SRC=Nodo.cpp \
	Arbol.cpp \
	main.cpp

OBJ=Nodo.o \
	Arbol.o \
	main.o

all:
	g++ -c ${SRC}
	g++ ${OBJ} -o arbol
