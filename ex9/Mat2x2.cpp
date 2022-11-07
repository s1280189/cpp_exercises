#include "Mat2x2.h"
#include <sstream>
#include <cmath>
#include <cctype>

Mat2x2::Mat2x2(){
  mat2x2[0][0]=1;
  mat2x2[0][1]=0;
  mat2x2[1][0]=0;
  mat2x2[1][1]=1;
  
}

Mat2x2::Mat2x2(float x[4]){
  mat2x2[0][0]=x[0];
  mat2x2[0][1]=x[2];
  mat2x2[1][0]=x[1];
  mat2x2[1][1]=x[3];
}



Mat2x2& Mat2x2::operator+= (const Mat2x2& b){
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      mat2x2[i][j]+=b.mat2x2[i][j];
    }
  }
  return *this;
}

Mat2x2& Mat2x2::operator-= (const Mat2x2& b){
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      mat2x2[i][j] -= b.mat2x2[i][j];
    }
  }

  return *this;
}

Mat2x2& Mat2x2::operator*= (const Mat2x2& b){
  Mat2x2 a=*this;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      mat2x2[i][j]=0;
      for(int k=0;k<2;k++){
	mat2x2[i][j]+=a.mat2x2[i][k]*b.mat2x2[k][j];
      }
    }
  }

  return *this;
}

float& Mat2x2::operator()(int i,int j){
  return mat2x2[i][j];
}


Mat2x2 operator+(const Mat2x2& a, const Mat2x2& b){
  Mat2x2 c=a;
  c+=b;

  return c;
}

Mat2x2 operator-(const Mat2x2& a, const Mat2x2& b){
  Mat2x2 c=a;
  c-=b;

  return c;
}


Mat2x2 operator*(const Mat2x2& a, const Mat2x2& b){
  Mat2x2 c=a;
  c*=b;
  return c;
}
      
Mat2x2 operator- (const Mat2x2& a){

  return -a;
}

bool operator==(const Mat2x2& a, const Mat2x2& b){
  Mat2x2& x;
  x(0,0)=1e-6;
  x(0,1)=1e-6;
  x(1,0)=1e-6;
  x(1,1)=1e-6;
  if( (a-b)>x || (b-a)<x )return 0;
  else
    return 1;
}

std::ostream& operator<<(std::ostream& os, Mat2x2& b){
 std::ostringstream s;
 s << '(' << b(0,0) << ',' << b(0,1) << ','
   << b(1,0) << ',' << b(1,1) << ')';

  return os<<s.str();
}