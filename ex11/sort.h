#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <cmath>
#include <cctype>
#include<utility>

namespace PL4 {
  template<class BiDirlt> void sort(BiDirlt begin, BiDirlt end){
      auto i=begin;
      while(i!=end){
	     auto j=i;
	     while(j!=end){
	         auto x=*j-1;
	         auto y=*j;
	         while(x > y){
	             auto temp=x;
	             x=y;
	             y=temp;
	         }
	     j--;
	     }
	      i++;
      }
};
}
#endif
