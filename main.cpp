#include "stat.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <random>
#include <chrono>

/*
 *  Statistics Task:
 *  - Functions to return the average and the standard deviation of a list.
 *  - Generating a test list made out of randomly chosen variables
 *  - Feeding the list to the functions.
 *
 * */

int main() {
  //unique seed: current time
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  
  //mersenne twister generator, initialize with previous seed
  std::mt19937 gen;
  gen.seed(seed);

  //uniform real distribution between 1,1000
  std::uniform_real_distribution <double> distribution(0.0,1000.0);

  //Push "random" values to 10-element array
  std::vector <double> vec;
  for(int i=1; i<10; i++) {
    vec.push_back(distribution(gen));
  }
  std::cout<<"Values of the sample are:\n";
  //Printing the values of the random distribution
  for(auto i: vec) {
   std::cout<<i<<std::endl;
  }
  //Calculating and printing the average and standart deviation
  double avg = average(vec);
  std::cout<<"Average of the values are:\n"<<avg<<std::endl;
  double dev = deviation(vec, avg);
  std::cout<<"Standart deviation is\n"<<dev<<std::endl;
  
  return 0;
}
