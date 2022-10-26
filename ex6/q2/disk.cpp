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

Disk::Disk(const Disk& disk1){
  center=disk1.center;
  radius=disk1.radius;
}

virtual std::string Disk::get_name() const{
  return "Circle";
}

virtual float Disk::compute_area() const{
  return radius*radius*PI;
}

virtual Disk* Disk::create() const{
  return new Disk();
}

virtual Disk* Disk::clone() const{
  return new Disk(*this);
}

virtual ~Disk(){};
