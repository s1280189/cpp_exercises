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

  Rectangle(const Rectangle& rec1);

  virtual std::string get_name() const;

  virtual float compute_area() const;
  virtual Rectangle* create() const;
  virtual Rectangle* clone() const;

  virtual ~Rectangle(){};


#endif
