#include "median.h"


int main(){
  std::vector<float> v1{4, 2, 3, 1};
  std::cout<< " median1 is ..." << compute_median(v1) << std::endl;

  std::vector<float> v2{5, 4, 2, 1, 3};
  std::cout<< "median2 is..." << compute_median(v2) << std::endl;

  return 0;
}
