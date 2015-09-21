CC=g++
LDFLAGS=
SOURCES=./tests/test_all.cpp ./src/factorial.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test_all
CATCH=external/catch/

CFLAGS=-c -Wall -I$(CATCH) -Isrc

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
	./test_all




########
#Current make system
#BIN=./bin/
#SOURCE=./source/
#
#LIST=$(BIN)/program1 $(BIN)/program2...
#
#all: $(LIST)
#
#$(BIN)/%:  $(SOURCE)%.cpp
	    $(CC) $(INC) $< $(CFLAGS) -o $@ $(LIBS)
