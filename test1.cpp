#include "stat.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <random>
#include <chrono>

using namespace std;
int main() {
  //unique seed: current time
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  
  //mersenne twister generator, initialize with previous seed
  mt19937 gen;
  gen.seed(seed);

  //uniform real distribution between 1,1000
  uniform_real_distribution <double> distribution(0.0,1000.0);

  //Push "random" values to 10-element array
  vector <double> vec;
  for(int i=1; i<10; i++) {
    vec.push_back(distribution(gen));
  }
  cout<<"Values of the sample are:\n";
  //Printing the values of the random distribution
  for(auto i: vec) {
    cout<<i<<endl;
  }
  //Calculating and printing the average and standart deviation
  double avg = average(vec);
  cout<<"Average of the values are:\n"<<avg<<endl;
  double dev = deviation(vec, avg);
  cout<<"Standart deviation is\n"<<dev<<endl;
  
  return 0;
}
