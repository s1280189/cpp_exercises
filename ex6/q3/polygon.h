#ifndef POLYGON_H
#define POLYGON_H
#include "shape.h"



class Polygon: public Shape{

 private:
  Point*  p;
  int n;
  
 public:
  Polygon();
  Polygon(Point* p, int n);
 Polygon(const Polygon& pol1);

  virtual std::string get_name() const;
  virtual float compute_area() const;
  virtual Polygon* create() const;
  virtual Polygon* clone() const;

  virtual ~Polygon();
  

};
#endif
