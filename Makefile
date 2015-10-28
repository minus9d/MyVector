CPPFLAGS = -I3rdparty/catch -IMyVector
CXXFLAGS = -std=c++11
TARGET = test

$(TARGET): MyVectorTest/main.cpp MyVectorTest/test_constructor.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $^ -o $@

clean:
	rm -r $(TARGET)

