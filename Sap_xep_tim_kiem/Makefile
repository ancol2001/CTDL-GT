CC=gcc
CXX=g++
CFLAGS=-Wall
CXXFLAGS=-Wall

# Đường dẫn và tên file đầu vào
IN = Hello.cpp

# Đường dẫn và tên file đầu ra
OUT = a.exe

all: $(OUT)

$(OUT): $(IN)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(IN)

clean:
	rm -f $(OUT)
