#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include "stack.h"

int main(){
  //COMPLETE
  //Write tests for testing your stack implementetaion
  Stack stack;
  stack.pop();
  std::cout<<(stack.size())<<std::endl;
  std::cout<<(stackempty())<<std::endl;

  
  Point point;
  point.x=1;
  point.y=1;
  stack.(point);
  std::cout<<(stack.empty())<<std::endl;
  point=top();
  printf("%d, %d\n",point.x,point.y);
  stack.pop();

  
  point.x=1;
  point.y=2;
  stack.push(point);

  point.x=3;
  point.y=3;
  stack.push(point);
  stack.push(point);
  stack.push(point);
  std::cout<<(stack.size())<<std::endl;

  stack.pop();
  stack.pop();
  stack.pop();
  stack.pop();

  int i;
  point.x=4;
  point.y=4;
  for(i=0;i<_max_size;i++){
    stack.push(point);
  }

  std::cout<<(size())<<std::endl;
  std::cout<<(full())<<std::endl;
  stack.push(point);
  std::cout<<full()<<std::endl;
  stack.push(point);
  return 0;
}

