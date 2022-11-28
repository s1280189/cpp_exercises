#include "polygon.h"

Polygon::Polygon(){
  n=0;
  p=nullptr;
}

Polygon::Polygon(Point* p1, int n1){
  n=n1;
  delete[] p;
  p=new Point[n];
  for(int i=0;i<n;i++){
    p[i]=p1[i];
  }
    
}
Polygon::Polygon(const Polygon& pol1){
  n=pol1.n;
  p=pol.p;
}

std::string Polygon::get_name() const{
  return "Polygon";
}

float Polygon::compute_area() const{
  float result=0;
  for(int i=0;i<n-1;i++){
    result=result+(p[i].x*p[i+1].y - p[i].y*p[i+1].x);
  }
  
  return result/2;
}


Polygon* Polygon::create() const{
  return new Polygon();
}

Polygon* Polygon::clone() const{
  return new Polygon(*this);
}

Polygon::~Polygon(){}



  
