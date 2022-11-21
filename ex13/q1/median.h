#ifndef MEDIAN_H
#define MEDIAN_H

#include<algorithm>
#include<iostream>
#include<vector>

float compute_median(std::vector<float>& v){
  float result1;
  int mid = v.size()/2;
  
  std::nth_element(v.begin(), v.begin()+mid  , v.end());
  std::nth_element(v.begin(), v.begin()+mid-1, v.end());
    result1=v[mid];
    if(v.size() %2 ==1){
      return result1;
    }
    else
      return (v[mid-1]+result1)/2;
}


#endif
