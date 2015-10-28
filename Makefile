CPPFLAGS = -I3rdparty/catch -IMyVector -std=c++11
TARGET = test

$(TARGET): MyVectorTest/main.cpp MyVectorTest/test_constructor.cpp
	$(CXX) $(CPPFLAGS) $^ -o $@

clean:
	rm -r $(TARGET)

