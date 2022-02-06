WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = g++ -std=c++11 -lstdc++
CFLAGS = -g $(WARNING) $(ERROR)

TESTFLAGS = -DDEBUG=1 -DDEBUG_TX=1 -DDEBUG_RX=1 
SOURCES = $(wildcard *.cpp)

BINARIES = $(SOURCES:.cpp=)

%: %.cpp
	$(GCC) $(CFLAGS) $< -o $@

debug_%: %.cpp
	$(GCC) $(CFLAGS) $(TESTFLAGS) $< -o $@

all: $(BINARIES)

clean:
	rm $(BINARIES)
