CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = testshapes
OBJS = testshapes.o circle.o triangle.o rectangle.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

testshapes.o: testshapes.cpp circle.h triangle.h rectangle.h
	$(CXX) $(CXXFLAGS) -c testshapes.cpp

circle.o: circle.cpp circle.h shape.h
	$(CXX) $(CXXFLAGS) -c circle.cpp

triangle.o: triangle.cpp triangle.h shape.h
	$(CXX) $(CXXFLAGS) -c triangle.cpp

rectangle.o: rectangle.cpp rectangle.h shape.h
	$(CXX) $(CXXFLAGS) -c rectangle.cpp

clean:
	rm -f $(OBJS) $(TARGET)
