#include "shape.h"
#include <iostream>
#include <string>

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

  std::string Shape::getname() const;

  float Shape::compute_area() const;
  Shape* Shape::create() const;
  Shape* Shape::clone() const;

  ~Shape();


#endif
