#include "ArrayStack.h"

int main(){
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


  printf("if stack5 & stack1 are identical ->");
  if(stack5==stack1){
    printf("TRUE\n");
  }
  
  for(int i=0;i<stack1.size();i++){
    std::cout<<"stack3 =:" << stack3.top()
	     << "stack1=:" << stack1.top() << std::endl;
    stack3.pop();
    stack1.pop();
  }

   for(int i=0;i<stack2.size();i++){
   std::cout<<"stack4 =:" << stack4.top()
	     << "stack2 =:" << stack2.top() << std::endl;
    stack4.pop();
    stack2.pop();
  }

   for(int i=0;i<10;i++){
     stack6.push(i);
   }


  return 0;
}
