#include "stat.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <random>

using namespace std;
int main() {

  vector <double> vec;
  default_random_engine generator;
  uniform_real_distribution <double> distribution(0.0,1000.0);

  for(int i=1; i<10; i++) {
    vec.push_back(distribution(generator));
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
