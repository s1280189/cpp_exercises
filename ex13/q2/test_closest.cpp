#include "closest.h"


int main(){
  std::vector<float> v1{4, 2, 3, 1, 5, 9 , 8};
  std::vector<float> vr=compute_k_closest(3, v1);
  
  for(int i=0; i<vr.size(); i++){
    std::cout<< vr[i] <<" " <<std::endl;
  }
    

  return 0;
}
