#include "shape.h"

#ifdef DISK_H
#define DISK_H

struct Point{
  float x;
  float y;
};

class Disk: public Shape{
 private:
  Point center;
  float radius;

 public:

  Disk();
  Disk(Point center, float radius);

  virtual std::string get_name();
  virtual float compute_area() const;
  virtual Shape* create() const;
  virtual Shape* clone() const;

  virtual ~Shape();
};

#endif
  
