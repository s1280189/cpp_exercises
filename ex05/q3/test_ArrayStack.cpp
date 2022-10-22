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

   stack6.push(1);
   stack6.push(2);
   stack6.push(3);
   stack6.push(4);
   stack6.push(5);

   ArrayStack stack7 = std::move(stack5);

    stack6 = std::move(stack2);

    max=stack7.size();
    for(int i=0;i<=max;i++){
      std::cout<<"stack7 =:"<< stack7.top()<<std::endl;
      std::cout<<"stack5 =:"<< stack5.top()<<std::endl;
      stack5.pop();
      stack7.pop();
    }

    std::cout<<"---------------"<<std::endl;

    

    max=stack6.size;
    for(int i=0;i<=max;i++){
      std::cout<<"stack6 =:"<< stack6.top()<<std::endl;
      std::cout<<"stack2 =:"<< stack2.top()<<std::endl;
      stack6.pop();
      stack2.pop();
    }


    
  return 0;
}
