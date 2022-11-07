#include "Mat2x2.h"
#include <sstream>
#include <cmath>
#include <cctype>

int main(){
  Mat2x2 m1;
  float m1d[2][2];
  m1d[0][0]=1;
  m1d[0][1]=0;
  m1d[1][0]=0;
  m1d[1][1]=1;
  if(m1(0,0)!=m1d[0][0] || m1(0, 1)!=m1d[0][1] ||
     m1(1, 0)!=m1d[1][0] || m1(1, 1)!=m1d[1][1]){
    std::cout<<"Failed"<<std::endl;
  }


  float x[4]={0,1,2,3};
  Mat2x2 m2(x);
  if(m2(0,0)!=x[0] || m2(0,1)!=x[2] ||
     m2(1,0)!=x[1] || m2(1,1)!=x[3]){
    std::cout<<"Failed"<<std::endl;
  }

  float x1[4]={0,0,0,0};
  float x2[4]={1,2,3,4};
  float x3[4]={-1,-2,-3,-4};
  Mat2x2 m3(x1);
  Mat2x2 m4(x2);
  Mat2x2 m5(x3);
  Mat2x2 temp = m1;
  temp += m3;
  if(temp==m1)
    std::cout<<"op+= ->Success"<<std::endl;
  

  temp -= m3;
  if(temp==m1)
    std::cout<<"op-= ->Success"<<std::endl;

  temp *= m4;
  if(temp==m4)
    std::cout<<"op*= -> Success"<<std::endl;

  if(m4(1,1)==4)
    std::cout<<"op()(float,float) ->Success"<<std::endl;

  if(-m4 == m5)
    std::cout<<" op- -> Success"<<std::endl;

  if((m3 + m4) == m4)
    std::cout<<" mat1 + mat2 -> Success"<<std::endl;

  if((m3 - m4)== m5)
    std::cout<<" mat1-mat2 -> Success"<<std::endl;

  if((m1 * m4)== m4)
    std::cout<<"mat1 * mat2 -> Success"<<std::endl;

  std::ostringstream os;
  os<<m1;
  if(os.str() =="(1,0,0,1)")
    std::cout<<"ostream -> Success"<<std::endl;
  
  


  return 0;
}
