/**
 *  Ekin Yaldiz
 *  Monte Carlo Methods in Physics: Exercise 1
 *  Program to calculate the average and standard deviation of a sample set (vector).
 *  namely, Statistics Tasks
 * 
 *
 *  SOURCE FILE FOR HEADER
 * **/

#include "stat.h"

//using namespace std;

//Average calculator
double average(vector<double> &vec) {
  double avg = 0;
  for(auto &i: vec) {
    avg += i/double(vec.size());
  }
  return avg;
}

//Standard deviation calculator
double deviation(vector<double> &vec, double avg) {
  double deviation = 0;
  for (auto &i: vec) {
    deviation += pow((i-avg),2);
  }
  deviation /= double(vec.size()-1);
  //deviation = sqrt(deviation);
  deviation = pow(deviation,0.5);
  return deviation;
}
