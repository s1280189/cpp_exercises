#include "median.h"


int main(){
  std::vector<float> v1{5, 10, 6, 4, 3, 2, 6, 7, 9, 3};
  std::cout<< " median1 is ..." << compute_median(v1) << std::endl;

  std::vector<float> v2{9,8,7,6,5,4,3};
  std::cout<< "median2 is..." << compute_median(v2) << std::endl;

  return 0;
}
