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
      
Mat2x2 operator- (Mat2x2& a){
	Mat2x2 c;
	for(int i=0;i<2;i++){
		for(int j=0; j<2; j++){
			c(i, j)= -a(i, j);
		}
	}
  return c;
}

bool operator==(const Mat2x2& a, const Mat2x2& b){
  Mat2x2 c=a;
  Mat2x2 d=b;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      if(c(i,j)-d(i,j)>1e-6 || d(i,j)-c(i,j)>1e-6){
       return false;
      }
    }
  }
    return true;
}

std::ostream& operator<<(std::ostream& os, const Mat2x2& b){
 Mat2x2 c=b;
 std::ostringstream s;
 s << '(' << c(0,0) << ',' << c(0,1) << ','
   << c(1,0) << ',' << c(1,1) << ')';

  return os<<s.str();
}
