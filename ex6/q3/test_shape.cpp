
#include "polygon.h"

struct Point{
  float x;
  float y;
};


int main(){
  int n=5;
  Polygon p1[5];
  p1[0].x=1;
  p1[0].y=1;

  p1[1].x=2;
  p1[1].y=2;

  p1[2].x=3;
  p1[2].y=3;

  p1[3].x=4;
  p1[3].y=4;

  p1[4].x=5;
  p1[4].y=5;
  
  Polygon po1(p1, 5);
  Polygon* pol2;
  Polygon* pol3;

  pol2=pol1.clone();
  pol3=pol1.create();

  std::cout<< pol1.get_name() << std::endl;
  std::cout<< "polygon1 are:"<<pol1.compute_area() <<std::endl;
  std::cout<< "polygon2(clone):getname: "<<pol2->get_name()<< std::endl;
  std::cout<< "polygon2(clone):area: " << pol2->compute_area()<<std::endl;
  std::cout<< "polygon3(create):getname: "<<pol3->get_name()<< std::endl;
  std::cout<< "polygon3(create):area: " << pol3->compute_area()<<std::endl;
		       

  return 0;
}
