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
  
  Rectangle(){
    left_corner.x=0;
    left_corner.y=0;
    width=0;
    height=0;
  }

  Rectangle(Point p1, float p1_width, float p1_height){
    left_corner = p1;
    width = p1_width;
    height = p1_height;
  }

  ~Rectangle(){
    delete left_corner;
    delete width;
    delete height;
  }

  virtual std::string getname() const;

  virtual float compute_area() const;
  virtual Shape* create() const;
  virtual Shape* clone() const;

  virtual ~Shape();


#endif
