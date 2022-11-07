#include <iostream>
#ifndef MAT2X2_H
#define MAT2X2_H

class Mat2x2{
  private:
  float  mat2x2[2][2];

 public:

  Mat2x2();

  Mat2x2(float x[4]);

  Mat2x2& operator+= (const Mat2x2& b);
  Mat2x2& operator-= (const Mat2x2& b);
  Mat2x2& operator*= (const Mat2x2& b);
  float& operator()(int i, int j);

};


Mat2x2 operator+ (const Mat2x2& a, const Mat2x2& b);
Mat2x2 operator-  (const Mat2x2& a, const Mat2x2& b);
Mat2x2 operator*  (const Mat2x2& a, const Mat2x2& b);
Mat2x2 operator- (const Mat2x2& a);

  
bool operator==(const Mat2x2& a,const Mat2x2& b);
std::ostream& operator<<(std::ostream& os, const Mat2x2& b);




#endif
