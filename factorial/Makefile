CC=/usr/local/bin/g++-5
LDFLAGS=
SOURCES=./tests/test_all.cpp ./src/example.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test_all
CATCH=external/catch/

CFLAGS=-c -Wall -Wextra -pedantic -std=c++14 -I$(CATCH) -Isrc

all: external/catch/catch.hpp $(SOURCES) $(EXECUTABLE) 
   	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

external/catch/catch.hpp:
	wget -N -q --no-check-certificate https://raw.github.com/philsquared/Catch/master/single_include/catch.hpp -P $(CATCH)
	touch $@
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(EXECUTABLE)
	# Todo: remove object files
test: $(EXECUTABLE)
	./test_all --success
