#include "Mat2x2.h"
#include <sstream>
#include <cmath>
#include <cctype>

Mat2x2<T,N>::Mat2x2(){
  for(int i=0;i<N; i++){
	for(int j=0;j<N;j++){
	if(i==j) e[i][j]=1;
	else e[i][j]=0;
	}
  }  
}

Mat2x2<T,N>::Mat2x2(T x[2*N]){
  for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		e[i][j]=x[i][j];
	}
  }
}



Mat2x2& Mat2x2::operator+= (const Mat2x2& b){
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      e[i][j]+=b.e[i][j];
    }
  }
  return *this;
}

Mat2x2& Mat2x2::operator-= (const Mat2x2& b){
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      e[i][j] -= b.e[i][j];
    }
  }

  return *this;
}

Mat2x2& Mat2x2::operator*= (const Mat2x2& b){
  Mat2x2 a=*this;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      e[i][j]=0;
      for(int k=0;k<2;k++){
	e[i][j]+=a.e[i][k]*b.e[k][j];
      }
    }
  }

  return *this;
}

float& Mat2x2::operator()(int i,int j){
  return e[i][j];
}


Mat2x2<T,N> operator+(const Mat2x2<T,N>& a, const Mat2x2<T,N>& b){
  Mat2x2<T,N> c;
  for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		c.e[i][j]=a.e[i][j]+ b.e[i][j];
	}
  }

  return c;
}

Mat2x2<T,N> operator-(const Mat2x2<T,N>& a, const Mat2x2<T,N>& b){
  Mat2x2<T,N> c;
  for(int i=0;i<N;i++){
	  for(int j=0;j<N;j++){
		  c.e[i][j]=a.e[i][j]-b.e[i][j];
	  }
  }	  

  return c;
}


Mat2x2<T,N> operator*(const Mat2x2<T,N>& a, const Mat2x2<T,N>& b){
  Mat2x2<T,N> c;
  for(int i=0;i<N;i++){
	  for(int j=0;j<N;j++){
		  c.e[i][j]=0;
		  for(int k=0;k<N;k++){
			  c.e[i][j]=c.e[i][j]+a.e[i][k] * b.e[k][i];
		  }
	  }
  }
  return c;
}
      
Mat2x2<T,N> operator- (const Mat2x2<T,N>& a){
	Mat2x2<T,N> c;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			c.e[i][j]= - a.e[i][j];
		}
	}
  return c;
}

bool operator==(const Mat2x2<T,N>& a, const Mat2x2<T,N>& b){
  Mat2x2<T,N> c=a;
  Mat2x2<T,N> d=b;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      if(c(i,j)-d(i,j)>1e-6 || d(i,j)-c(i,j)>1e-6){
       return false;
      break;
      }
    }
  }
    return true;
}

std::ostream& operator<<(std::ostream& os, const Mat2x2<T,N>& b){
 Mat2x2<T,N> c=b;
 std::ostringstream s;
 s << '(' << c(0,0) << ',' << c(0,1) << ','
   << c(1,0) << ',' << c(1,1) << ')';

  return os<<s.str();
}
