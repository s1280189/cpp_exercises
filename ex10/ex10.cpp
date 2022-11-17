#include<iostream>
#include<string>
#include<sstream>
#include<stack>

std::stack<double> operand;
std::stack<std::string> operation;

double evaluate(const std::string str){
  std::stringstream ss;
  std::stringstream sss;
  std::string output;
  double x,y;
  double num;

  ss<<str;
  while(true){
    ss>>output;

    if(output == "+") operation.push("+");
    if(output=="-") operation.push("-");
    if(output=="*") operation.push("*");
    if(output=="/") operation.push("/");
    if(output== ")"){
	x=operand.top();
	operand.pop();
	y=operand.top();
	operand.pop();
	if(operation.top()=="+"){
	  operand.push(y+x);
	}

	if(operation.top()=="-"){
	  operand.push(y-x);
	}

	if(operation.top()=="*"){
	  operand.push(y*x);
	}

	if(operation.top()=="/"){
	  operand.push(y/x);
	}
    }
    
    else if(output == "("){
    }

    else{
      sss<<output;
      sss>>num;
      operand.push(num);
    }
  }

  return operand.top();
}



int main(){
  double result;
  std::string str="( 1 + ( 2 + 3 ) )";
  result = evaluate(str);
  std::cout<<"result1:" << result <<std::endl;

  str="( 1 + ( 2 - 3 ) )";
  result= evaluate(str);
  std::cout<<"result2:"<< result <<std::endl;

  str="( 2 * ( 6 / 2 ) )";
  result=evaluate(str);
  std::cout<<"result3:" << result <<std::endl;

  return 0;
}
