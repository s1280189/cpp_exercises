#include<stdio.h>
#include<stdlib.h>
#include <iostream>


unsigned long multiply(unsigned long x, unsigned long y){
  unsigned long result=0;

  while(y>0){
    if(y & 1){
      result=result+x;
    }
    x=x<<1;
    y=y>>1;
  }
  return result;
}

int main(){
  unsigned long x,y;
  scanf("%lo",&x);
  scanf("%lo",&y);
  std::cout << multiply(x,y) << std::endl;
  
  return 0;
}
