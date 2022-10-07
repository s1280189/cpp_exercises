#include<stdio.h>
#include<stdlib.h>
#include <iostream>

unsigned long add(unsigned long x, unsigned long y){
  unsigned long	z;

  while(y!=0){
    z=(x&y);
    x=(x^y);
    y=(z<<1);
  }

  return x;
}


unsigned long multiply(unsigned long x, unsigned long y){
  unsigned long result=0;
  unsigned long reg=1;
  while(y>0){
    if(y&1){
      result=add(result,x);
    }
    x=x<<1;
    y=y>>1;
  }
  
  return result;
}


int main(){
  unsigned long x,y;
  scanf("%lo %lo",&x,&y);
  std::cout << multiply(x,y) << std::endl;
  
  return 0;
}
