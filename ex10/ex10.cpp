#include<iostream>
#include<string>
#include<sstream>
#include<stack>

std::stack<double> operand;
std::stack<std::string> operation;

double evaluate(const std::string& str){
  std::stringstream ss;
  double outputOperand;
  std::string outputOperation;
  std::string outputline;

  ss<<str;
  while(std::getline(ss,outputline)){
    if(ss>>outputOperand){
      operand.push(outputOprand);
    }

    else if(ss>>outputOperation){
      if(outputOperation == "+")
	operation.push("+");
      if(outputOperation=="-")
	operation.push("-");
      if(outputOperation=="*")
	operation.push("*");
      if(outputOperation=="/")
	operation.push("/");

      if(outputOperation == ")"){
	
	double x,y;
	x=operand.top();
	operand.pop();
	y=operand.top();
	operand.pop()
	if(operation.top()=="+"){
	  operand.push(y+x);
	}

	if(operation.top()=="-"){
	  operand.push(y-x);
	}

	if(operation.top()=="*"){
	  operand.push(y*x);
	}

	if(opration.top()=="/"){
	  operand.push(y/x);
	}
      }
    }
  }

  return oprand.top();
}
      

    
      
