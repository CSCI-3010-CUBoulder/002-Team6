CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: main test

clean: 
	rm main test UtilityFunctions.o

main: UtilityFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.o -o main

UtilityFunctions.o: UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp UtilityFunctions.o -o test