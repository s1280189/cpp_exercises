#include "rectangle.h"
#include "disk.h"

struct Point{
  float x;
  float y;
};


int main(){
  Point p1;
  p1.x=2;
  p1.y=2;
  
  Rectangle rec1(p1, 3, 4);
  Rectangle* rec2;
  Rectangle* rec3;

  rec2=rec1.clone();
  rec3=rec1.create();

  std::cout<< rec1.get_name() << std::endl;
  std::cout<< "recatngle1 area ->" << rec1.compute_area() <<std::endl;

  std::cout<<"rectangle2 -> rectangle1's clone"<<std::endl;
  std::cout<< "rectangle2 check get_name ->" << rec2->get_name() <<std::endl;
  std::cout<<"recatngle2 check compute_area()->"
	   <<rec2->compute_area()<<std::endl;

  std::cout<<"rectangle3 check get_name->"
	   << rec3->get_name() << std::endl;
  std::cout<<"recatnagle3 check compute_area()"
	   <<rec3->compute_area()<<std::endl;
  


  Disk disk1(p1, 5);
  Disk* disk2;
  Disk* disk3;
  disk2=disk1.clone;
  disk3=disk1.create;
  

  std::cout<< disk1.get_name() << std::endl;
  std::cout<< "disk1 area ->" << disk1.compute_area() <<std::endl;

  std::cout<<"disk2 -> disk1's clone"<<std::endl;
  std::cout<< "disk2 check get_name ->" << disk2->get_name() <<std::endl;
  std::cout<<"disk2 check compute_area()->"
           <<disk2->compute_area()<<std::endl;

  std::cout<<"disk3 -> new create disk1"<<std::endl;
  std::cout<<"disk3 check get_name->"
           << disk3->get_name() << std::endl;
  std::cout<<"recatnagle3 check compute_area()"
           <<disk3->compute_area()<<std::endl;


  return 0;
}
