#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <cmath>
#include <cctype>
#include<utility>

namespace PL4 {
  template<class BiDirlt> void sort(BiDirlt begin, BiDirlt end){
    BiDirlt i=0;
    BiDirlt j=0;
    BiDirlt temp;
	  
	  for(i=begin;i<end;i++){
		  j=i;
		  while((j > 0) && (j-1) >  j){
			  swap(j-1, j);
			  j--;
		  } 
	  
  };
}
#endif
