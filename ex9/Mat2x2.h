#include <iostream>
#ifndef MAT2X2_H
#define MAT2X2_H
#include <sstream>
#include <cmath>
#include <cctype>

template<class T, int N>
class Mat2x2{

 public:
 
 T e[N][N];
  Mat2x2(){
    for(int i=0;i<N; i++){
      for(int j=0;j<N;j++){
        if(i==j) e[i][j]=1;
        else e[i][j]=0;
      }
    }
  };
  
  Mat2x2(T x[2*N]){
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        e[i][j]=x[i+j*N];
      }
    }
  };

  
  Mat2x2& operator+= (const Mat2x2& b){
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        e[i][j]+=b.e[i][j];
      }
    }
    return *this;
  };
    
  Mat2x2& operator-= (const Mat2x2& b){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      e[i][j] -= b.e[i][j];
    }
  }

  return *this;
};
    
  Mat2x2& operator*= (const Mat2x2& b){
  Mat2x2 a=*this;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      e[i][j]=0;
      for(int k=0;k<N;k++){
	e[i][j]+=a.e[i][k]*b.e[k][j];
      }
    }
  }

  return *this;
};
    
  float& operator()(int i, int j){
  return e[i][j];
};



};


template<class T, int N> Mat2x2<T, N> operator- (Mat2x2<T, N>& a){
	Mat2x2<T,N> c;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			c(i, j)= - a(i, j);
		}
	}
  return c;
};	  
	
template<class T, int N>Mat2x2<T,N> operator+ (const Mat2x2<T,N>& a, const Mat2x2<T,N>& b){
  Mat2x2<T,N> c;
  for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		c.e[i][j]=a.e[i][j]+ b.e[i][j];
	}
  }

  return c;
};




template<class T, int N>Mat2x2<T,N> operator*  (const Mat2x2<T,N>& a, const Mat2x2<T,N>& b){
  Mat2x2<T,N> c;
  for(int i=0;i<N;i++){
	  for(int j=0;j<N;j++){
		  c.e[i][j]=0;
		  for(int k=0;k<N;k++){
			  c.e[i][j]=c.e[i][j]+a.e[k][j] * b.e[i][k];
		  }
	  }
  }
  return c;
};

template<class T, int N> Mat2x2<T, N> operator-  (const Mat2x2<T, N>& a, const Mat2x2<T, N>& b){
  Mat2x2<T, N> c;
  for(int i=0;i<N;i++){
	  for(int j=0;j<N;j++){
		  c.e[i][j]=a.e[i][j]-b.e[i][j];
	  }
  }	  

  return c;
};

template<class T, int N>bool operator==(const Mat2x2<T,N>& a,const Mat2x2<T,N>& b){
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
};

  
template<class T, int N> std::ostream& operator<<(std::ostream& os, const Mat2x2<T,N>& b){
 Mat2x2<T,N> c=b;
 std::ostringstream s;
 s << '(' << c(0,0) << ',' << c(0,1) << ','
   << c(1,0) << ',' << c(1,1) << ')';

  return os<<s.str();
};

#endif
