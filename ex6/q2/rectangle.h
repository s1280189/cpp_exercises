#include "shape.h"

#ifdef RECTANGLE_H
#define RECTANGLE_H

struct Point{
  float x;
  float y;
};


class Rectangle : public Shape{
 private:
  Point left_corner;
  float width;
  float height;

  
 public:
  
  Rectangle();

  Rectangle(Point p1, float p1_width, float p1_height);

  virtual std::string get_name() const;

  virtual float compute_area() const;
  virtual Shape* create() const;
  virtual Shape* clone() const;

  virtual ~Shape();
}

#endif
