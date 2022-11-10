#include<iostream>
#include<string>
#include<sstream>
#include<stack>

std::stack<double> operand;
std::stack<std::string> operation;

double evaluate(const std::string& str){
  std::stringstream ss;
  std::stringstream sss;
  std::string output;
  std::string outputline;

  ss<<str;
  while(std::getline(ss,outputline)){
    ss>>output;

    if(output == "+") operation.push("+");
    if(output=="-") operation.push("-");
    if(output=="*") operation.push("*");
    if(output=="/") operation.push("/");
    if(output== ")"){
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

    else{
      double num;
      sss<<output;
      sss>>num;
      operand.pop(num);
    }
  }

  return oprand.top();
}



int main(){
  double result;
  std::string& str="( 1 + ( 2 + 3 ) )";
  result = evaluate(str);
  std::cout<<"result1:" << result <<std::endl;

  str="( ( 2 - 3 ) * -2 / 4 ) ";
  result= evaluate(str);
  std::cout<<"result2:"<< result <<std::endl;

  str="( ( 2 + 3 ) * 3 + 2 - ( 8 / 4 ) / 2 + 1 )";
  result=evaluate(str);
  std::cout<<"result3:" << result <<std::endl;

  return 0;
}
      

    
      
