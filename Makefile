all: clean 
	g++ vector.h vector.cpp main.cpp -std=c++20 -o ./main && ./main
clean:
	rm -rf ./main ./vector
