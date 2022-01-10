#Makefile template provided by Jacques Bloch\
for the course Monte Carlo Methods in Physics\
at University of Regensburg SS20.

#SOURCES=$(HOME)/devel/sources
#vpath %.cc $(SOURCES) 
#vpath %.cpp $(SOURCES)
#vpath %.c $(SOURCES)

CC = gcc
CXX = g++
CXXFLAGS = -std=c++11 -I. -I $(SOURCES)/lib
#LIBS = -lgsl -lgslcblas 

PROGRAM = test
OBJS = stat.cpp main.cpp

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
