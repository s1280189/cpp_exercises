#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <cmath>
#include <cctype>
#include<utility>

namespace PL4 {
  template<class BiDirlt> void sort(BiDirlt begin, BiDirlt end){
    BiDirlt i,j,x;
    BiDirlt temp;
	  
	  for(i=begin;i<end;i++){
		  j=i;
		  x=j--;
		  while((j > 0) && j >  x){
			  swap(j, x);
			  j--;
			  x--;
		  } 
	  
  };
};
}
#endif
