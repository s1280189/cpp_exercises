#ifndef CLOSEST_H
#define CLOSEST_H

#include<algorithm>
#include<iostream>
#include<vector>

std::vector<float> compute_k_closest(int k, std::vector<float>& v){

  std::vector<float> result;
  
  std::vector<float>::iterator max = std::max_element(v.begin(), v.end());

 for(i=1;i<=k;i++){
   std::nth_element(v.begin(), v.begin()+i, v.end());
   
 }
  
  for(i=1;i<=k;i++){
    result.push_back(*(v.begin() + i));
  }
  
  return result;


}
