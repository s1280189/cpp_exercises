#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <cmath>
#include <cctype>
#include<utility>

namespace PL4 {
  template<class BiDirlt> void sort(BiDirlt begin, BiDirlt end){
    auto i,j,x;
	  
	  i=begin;
	  while(i != end){
		  j=*i;
		  x=j--;
		  while(j != 0 && j > x ){
			  
			  swap(j, x);
			  j--;
			  x--;
		  } 
	  i++;
  };
};
}
#endif
