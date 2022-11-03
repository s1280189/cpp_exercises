#include "Mat2x2.h"

int main(){
  Mat2x2 m1;
  float m1d[2][2]={(1,0),(0,1)};
   if(m1.mat2x2[0][0]!=m1d[0][0] || m1.mat2x2[0][1]!=m1d[0][1] ||
     m1.mat2x2[1][0]!=m1d[1][0] || m1.mat2x2[1][1]!=m1[1][1]){
    std::cout<<"Failed"<<std::endl;
  }


  float x[4]={0,1,2,3};
  Mat2x2 m2(x[4]);
  if(m2.mat2x2[0][0]!=x[0] || m2.mat2x2[0][1]!=x[2] ||
     m2.mat2x2[1][0]!=x[1] || m2.mat2x2[1][1]!=x[3]){
    std::cout<<"Failed"<<std::endl;
  }

  float x1[4]={0,0,0,0);
  float x2[4]={1,2,3,4};
  float x3[4]={-1,-2,-3,-4};
  Mat2x2 m3(x1[4]);
  Mat2x2 m4(x2[4]);
  Mat2x2 m5(x3[4]);
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

  if(m4[](1,1)==4)
    std::cout<<"op[](float,float) ->Success"<<std::endl;

  if(-m4 == m5)
    std::cout<<" op- -> Success"<<std::emdl;

  if((m3 + m4) == m4)
    std::cout<<" mat1 + mat2 -> Success"<<std::endl;

  if((m3 - m4)== m5)
    std::cout<<" mat1-mat2 -> Success"<<std::endl;

  if((m1 * m4)== m4)
    std::cout<<"mat1 * mat2 -> Success"<<std::endl;

  std::ostream os;
  os<<m1;
  if(os=="(1,0,0,1)")
    std::cout<<"ostream -> Success"<<std::endl;
  
  


  return 0;
}
