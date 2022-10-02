GCC_COMMAND = g++ -W -Wall -Wfloat-equal -Wpointer-arith -Wwrite-strings -Wcast-align \
-Wformat-security -Wmissing-format-attribute -Wformat=2 \
-Wno-long-long -Wcast-align -Winline -Werror -pedantic -pedantic-errors \
-Wunused -Wuninitialized
#--param inline-unit-growth=1000000 --param max-inline-insns-single=10000000 \
#--param large-function-growth=10000000 -fPIC

Dist.o: Dist.cpp
	$(GCC_COMMAND) -fno-elide-constructors -std=c++11  ./Dist.cpp -c

Point.o: Point.cpp
	$(GCC_COMMAND) -fno-elide-constructors -std=c++11  ./Point.cpp -c

main.o:main.cpp
	$(GCC_COMMAND) -fno-elide-constructors -std=c++11  ./main.cpp -c

all: Point.o main.o Dist.o
	$(GCC_COMMAND) -fno-elide-constructors -std=c++11  -o runner ./main.o ./Point.o ./Dist.o

