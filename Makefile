CXX = g++
CXXFLAGS = -Wall -std=c++17
LIBS = -lraylib

SOURCES = main.cpp game.cpp ball.cc paddle.cpp
EXECUTABLE = pong

$(EXECUTABLE):
	$(CXX) $(SOURCES) -o $(EXECUTABLE) $(LIBS)

clean:
	rm -f $(EXECUTABLE)