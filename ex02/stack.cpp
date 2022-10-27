#include<iostream>
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

bool Stack::empty(){
  if(_top == -1)
    return true; //stack is empty
  else
    return false; //stack is not empty;
}

bool Stack::full(){
  if(_top == _max_size)
    return true; //stack is full
  else
    return false; //stack is not full 
}

int Stack::size(){
  if(_top==_max_size){
    return _top;
  }
  else
    return _top+1;
}

void Stack::push(Point point){
  if(Stack::full() != true){
    _data[_top+1]=point;
    _top++;
  }
  else
    std::cerr << "stack is full!" <<std::endl;
}

void Stack::pop(){
  if(Stack::empty()!= true){
    
    _top--;
  }
  else
    std::cerr << "stack is empty!"<<std::endl;
}
