#include "shape.h"
#include <iostream>

#ifndef DISK_H
#define DISK_H



class Disk: public Shape{
 private:
  Point center;
  float radius;

 public:
  Disk();
  Disk(Point center, float radius);
  Disk(const Disk& disk1);

  virtual std::string get_name() const;
  virtual float compute_area() const;
  virtual Disk* create() const;
  virtual Disk* clone() const;

  virtual ~Disk();


};
  
