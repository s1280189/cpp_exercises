#include <iostream>
#ifndef MAT2X2_H
#define MAT2X2_H

template<class T, int N>
class Mat2x2{
  private:
  T e[N];

 public:

  Mat2x2();

  Mat2x2(float x[N]);

  Mat2x2& operator+= (const Mat2x2& b);
  Mat2x2& operator-= (const Mat2x2& b);
  Mat2x2& operator*= (const Mat2x2& b);
  float& operator()(int i, int j);

};

template<class T, int N>
Mat2x2<T,N> operator+ (const Mat2x2<T,N>& a, const Mat2x2<T,N>& b);
Mat2x2<T,N> operator-  (const Mat2x2<T,N>& a, const Mat2x2<T,N>& b);
Mat2x2<T,N> operator*  (const Mat2x2<T,N>& a, const Mat2x2<T,N>& b);
Mat2x2<T,N> operator- (const Mat2x2<T,N>& a);

  
bool operator==(const Mat2x2<T,N>& a,const Mat2x2<T,N>& b);
std::ostream& operator<<(std::ostream& os, const Mat2x2<T,N>& b);




#endif
