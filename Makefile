all: vector clean 
	g++ main.cpp vector.cpp -std=c++20 -o ./main && ./main
clean: 
	rm ./vector ./main
