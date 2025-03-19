#ifndef FUNCTION_HEADER_FILE
#define FUNCTION_HEADER_FILE
#include<functional>

struct parameters{
  Point initialPoint;
  double stepTol;
  double resTol;
  double initialLearningRate;
  unsigned int maxIt;
};

returnType findMinimum(std::function<double(Point)>, gradf,
  const parameters & params);

#endif