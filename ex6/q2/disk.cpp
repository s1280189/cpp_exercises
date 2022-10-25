#include "disk.h"
#define PI 3.14159265359


Disk::Disk(){
  center.x=0;
  center.y=0;
  radius=0;
};

Disk::Disk(Point cent1, float rad1){
  center=cent1;
  radius=rad1;
};

virtual std::string Disk::get_name() const{
  return "Circle";
};

virtual float Disk::compute_area() const{
  return radius*radius*PI;
}

virtual Shape* Disk::create() const{
  return new Disk();
}

virtual Shape* Disk::clone() const{
  return new Disk();
}

virtual ~Shape();
