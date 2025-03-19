#include"Function.hpp"

Point findMinimum(std::function<double(Point)> f,
  std::function<std::vector<double>(Point)>,
  const parameters & params)
{
  Point xk = params.initialPoint;
  Point xkp1 = params.initialPoint;
  double alpha;
  for(unsigned int i = 1; i <= params.maxIt; ++i)
  {
    xk = xkp1;
    alpha = params.initialLearningRate;
    std::vector<double> gradFk = gradf(xk);
    while(f(xk)-f(xk - alpha * gradFk) < sigma * alpha * normSquared(gradFk) ||
      alpha < 2.0 * params.minAlpha)
      alpha /=2;
    
    xkp1 = xk - alpha * gradf(xk);
    
  }
}

// This is the implementation of the squared norm function
double normSquared(const std::vector<double> vec)
{
  double norm = 0.;
  for(double i : vec)
    norm += (i*i);
  return norm;
}