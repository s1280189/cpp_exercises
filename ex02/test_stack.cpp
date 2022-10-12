#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include "stack.h"

int main(){
  //COMPLETE
  //Write tests for testing your stack implementetaion
  Stack::pop();
  std::cout<<(Stack::size())<<std::endl;
  std::cout<<(Stack::empty())<<std::endl;

  
  Point point;
  point.x=1;
  point.y=1;
  Stack::push(point);
  std::cout<<(Stack::empty())<<std::endl;
  std::cout<<(Stack::top())<<std::endl;
  Stack::pop();

  
  point.x=1;
  point.y=2;
  Stack::push(point);

  point.x=3;
  point.y=3;
  Stack::push(point);
  Stack::push(point);
  Stack::push(point);
  std::cout<<(Stack::size())<<std::endl;

  Stack::pop();
  Stack::pop();
  Stack::pop();
  Stack::pop();

  int i;
  point.x=4;
  point.y=4;
  for(i=0;i<_max_size;i++){
    Stack::push(point);
  }
  Stack::push(point);
  std::cout<<(Stack::size())<<std::endl;
  return 0;
}

