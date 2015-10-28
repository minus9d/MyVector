CC = g++
CPPFLAGS = -I3rdparty/catch -IMyVector -std=c++11
TARGET = test.exe

$(TARGET): MyVectorTest/main.cpp MyVectorTest/test_constructor.cpp
	$(CC) $(CPPFLAGS) $^ -o $@

clean:
	rm -r $(TARGET)

