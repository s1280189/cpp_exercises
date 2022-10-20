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


  return 0;
}
