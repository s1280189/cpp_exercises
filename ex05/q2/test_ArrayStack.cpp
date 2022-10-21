#include "ArrayStack.h"

int main(){
  int max;
  ArrayStack stack1;
  stack1.push("1");
  stack1.push("2");
  stack1.push("3");

  ArrayStack stack2(5);
  stack2.push("1");
  stack2.push("2");
  stack2.push("3");
  stack2.push("4");

  ArrayStack stack3(stack1);
  ArrayStack stack4=stack2;

  ArrayStack stack5;
  stack5=stack1;
  ArrayStack stack6(10);
  stack6=stack6;


  max=stack1.size();
  for(int i=0;i<=max;i++){
    std::cout<<"stack1 =:" << stack1.top() <<std::endl;
    std::cout<<"stack3 =:" << stack3.top() <<std::endl;
    std::cout<<"stack5 =:" << stack5.top()  << std::endl;
    stack1.pop();
    stack3.pop();
    stack5.pop();
  }

  std::cout<<"------------------------"<<std::endl;
  
  max=stack2.size();
   for(int i=0;i<=max;i++){
     std::cout<<"stack2 =:" << stack2.top() <<std::endl;
     std::cout<< "stack4 =:" << stack4.top() << std::endl;
    stack4.pop();
    stack2.pop();
  }

   stack6.push(1);
   stack6.push(2);
   stack6.push(3);
   stack6.push(4);
   stack6.push(5);


  return 0;
}
