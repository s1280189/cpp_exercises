#include "rectangle.cpp"
#include "disk.cpp"
#include "polygon.cpp"

struct Point{
  float x;
  float y;
};


int main(){
  int n=5;
  Polygon p1[5];
  p1.x=1;
  p1.y=1;

  p1.x=2;
  p1.y=2;

  p1.x=3;
  p1.y=3;

  p1.x=4;
  p1.y=4;

  p1.x=5;
  p1.y=5;
  
  Polygon p1(p1, 5);
  Polygon* p2;
  Polygon* p3;

  p2=p1.clone();
  p3=p1.create();

  std::cout<< p1.get_name() << std::endl;
  std::cout<< "polygon1 are:"<<p1.compute_area() <<std::endl;
  std::cout<< "polygon2(clone):getname: "<<p2.get_name()<< std::endl;
  std::cout<< "polygon2(clone):area: " << p2.compute_area()<<std::endl;
  std::cout<< "polygon3(create):getname: "<<p3.get_name()<< std::endl;
  std::cout<< "polygon3(create):area: " << p3.compute_area()<<std::endl;
		       

  return 0;
}
