#include<rectangle.h>

Rectangle::Rectangle(){
  left_corner.x=0;
  left_corner.y=0;
  width=0;
  height=0;
};

Rectangle::Rectangle(Point p1, float p1_width, float p1_height){
   left_corner = p1;
   width = p1_width;
   height = p1_height;
};

virtual std::string Ractangle::get_name() const{
  return "Restangle";
}

virtual float Rectangle::compute_area() const{
  return width*height;
}

virtual Rectangle* Rectangle::create() const {
  return new Rectangle();
}

virtual Rectangle* Rectangle::clone() const{
  return new Rectangle(*this);
}

virtual ~Rectangle();
