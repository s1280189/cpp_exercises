#include "ArrayStack.h"

int main(){
  ArrayStack stack1;
  try{
    stack1.pop();
    stack1.top();
  } catch(std::runtime_error& e){
    std::cout<< e.what() <<std::endl;
  };

  stack1.push("1");
  stack1.push("2");
  stack1.push("3");
  
   try{
    stack1.pop();
    stack1.top();
  } catch(std::runtime_error& e){
    std::cout<< e.what() <<std::endl;
  };


  stack1.pop();
  stack1.pop();
  stack1.pop();
  
   try{
    stack1.pop();
    stack1.top();
  } catch(std::runtime_error& e){
    std::cout<< e.what() <<std::endl;
  };



  return 0;
}
