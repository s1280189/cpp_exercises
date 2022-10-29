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
  
  Polygon po1(p1, 5);
  Polygon* p2;
  Polygon* p3;

  pol2=p1.clone();
  pol3=p1.create();

  std::cout<< pol1.get_name() << std::endl;
  std::cout<< "polygon1 are:"<<pol1.compute_area() <<std::endl;
  std::cout<< "polygon2(clone):getname: "<<pol2.get_name()<< std::endl;
  std::cout<< "polygon2(clone):area: " << pol2.compute_area()<<std::endl;
  std::cout<< "polygon3(create):getname: "<<pol3.get_name()<< std::endl;
  std::cout<< "polygon3(create):area: " << pol3.compute_area()<<std::endl;
		       

  return 0;
}
