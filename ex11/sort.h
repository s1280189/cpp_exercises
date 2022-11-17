#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <cmath>
#include <cctype>

namespace PL4 {
  template<class BiDirlt> void sort(BiDirlt begin, BiDirlt end){
    BiDirlt i;
    BiDirlt j;
    BiDirlt temp;

    for(i=begin;i<end;i++){
      for(j=begin++;j<end;j++){
	if(i > j)
	  {
	    temp = i;
	    i = j;
	    j = temp;
	  }
      }
    }

  };
}
#endif
