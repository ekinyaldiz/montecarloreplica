SOURCES=$(HOME)/devel/sources
vpath %.cc $(SOURCES) 
vpath %.cpp $(SOURCES)
vpath %.c $(SOURCES)

CC = gcc
CXX = g++
CXXFLAGS = -fopenmp -O3 -std=c++11 -I. -I $(SOURCES)/lib
LIBS = -lgsl -lgslcblas 

PROGRAM = Ising
OBJS = Ising.o something.o another.o

$(PROGRAM): $(OBJS)
	$(CXX) -o $@ $(CXXFLAGS) $^ $(LIBS)
	
clean:
	rm -f $(PROGRAMS) $(OBJS)

%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< 
	
%.o: %.cc $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< 
	
%.o: %.c $(HDRS)
	$(CC) $(CXXFLAGS) -c $< 
