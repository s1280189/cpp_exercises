#include "Mat2x2.h"

Mat2x2::Mat2x2(){
  mat2x2[2][2]={(1,0),(0,1)};
}

Mat2x2::Mat2x2(float[] x){
  mat2x2[0][0]=x[0];
  mat2x2[0][1]=x[2];
  mat2x2[1][0]=x[1];
  mat2x2[1][1]=x[3];
}



Mat2x2::Mat2x2& operator+= (const Mat2x2& b){
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      mat2x2[i][j]+=b.mat2x2[i][j];
    }
  }
  return *this;
}

Mat2x2::Mat2x2& operator-= (const Mat2x2& b){
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      mat2x2[i][j] -= b.mat2x2[i][j];
    }
  }

  return *this;
}

Mat2x2::Mat2x2& operator*= (const Mat2x2& b){
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

Mat2x2::float& operator[](int i,int j){
  return mat2x2[i][j];
}


Mat2x2 operator+(const Mat2x2& a, const Mat2x2& b){
  Mat2x2 c;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      c.mat2x2[i][j]=a.mat2x2[i][j]+b.mat2x2[i][j];
    }
  }

  return c;
}

Mat2x2 operator-(const Mat2x2& a, const Mat2x2& b){
  Mat2x2 c;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      c.mat2x2[i][j]=a.mat2x2[i][j]-b.mat2x2[i][j];
    }
  }

  return c;
}


Mat2x2 operator*(const Mat2x2& a, const Mat2x2& b){
  Mat2x2 c;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      for(int k=0;k<2;k++){
      c.mat2x2[i][j]=a.mat2x2[i][k]+b.mat2x2[k][j];
      }
    }
  }
  return c;
}
      
Mat2x2 operator- (){
  Mat2x2 result;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      result.mat2x2[i][j] = -mat2x2[i][j];
    }
  }

  return result;
}

bool operator==(const Mat2x2& b){
};

ostream& operator<<(ostream& os, const Mat2x2& b){
};
