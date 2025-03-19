#ifndef FUNCTION_HEADER_FILE
#define FUNCTION_HEADER_FILE
#include<functional>
#include<vector>

struct parameters{
  Point initialPoint;
  double stepTol;
  double resTol;
  double initialLearningRate;
  double sigma;
  double minAlpha;
  unsigned int maxIt;
};

Point findMinimum(std::function<double(Point)> f,
  std::function<std::vector<double>(Point)> gradf,
  const parameters & params);

// This is the declaration of the function that returns the squared norm of a
// vector
double normSquared(const std::vector<double> vec);
#endif