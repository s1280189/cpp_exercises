#include "rectangle.h"

Rectangle::Rectangle(){
  left_corner.x=0;
  left_corner.y=0;
  width=0;
  height=0;
}

Rectangle::Rectangle(Point p1, float p1_width, float p1_height){
   left_corner = p1;
   width = p1_width;
   height = p1_height;
}

Rectangle::Rectangle(const Rectangle& rec1){
  left_corner=rec1.left_corner;
  width= rec1.width;
  height=rec1.height;
}

std::string Rectangle::get_name() const{
  return "Restangle";
}

float Rectangle::compute_area() const{
  return width*height;
}

Rectangle* Rectangle::create() const {
  return new Rectangle();
}

Rectangle* Rectangle::clone() const{
  return new Rectangle(*this);
}

Rectangle::~Rectangle(){}
