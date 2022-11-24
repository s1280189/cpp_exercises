#ifndef CLOSEST_H
#define CLOSEST_H

#include<algorithm>
#include<iostream>
#include<vector>

std::vector<float> compute_k_closest(int k, std::vector<float>& v){

  std::vector<float> result;
  
  std::vector<float>::iterator max = std::max_element(v.begin(), v.end());

  int i=1;

   while(k <= std::distance(v.begin()+i, max)+1){
   std::nth_element(v.begin(), v.begin()+i, v.end(), std::greater<float>{});
   result.push_back(*(v.begin()+i));
   i++;
 }
  
  return result;
  


}

#endif
