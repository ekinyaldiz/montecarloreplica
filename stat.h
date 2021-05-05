/**
 *  Ekin Yaldiz
 *  Monte Carlo Methods in Physics: Exercise 1
 *  Program to calculate the average and standard deviation of a sample set (vector).
 *  namely, Statistics Tasks
 * 
 *  HEADER FILE
 * **/

#ifndef STAT_H_INCLUDED
  #define STAT_H_INCLUDED

  #include <vector>

  //Average calculator
  double average(std::vector<double> &vec);

  //Standard deviation calculator
  double deviation(std::vector<double> &vec, double avg);
#endif
