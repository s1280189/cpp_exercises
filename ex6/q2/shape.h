#include<string>
#include<iostream>
#ifdef SHAPE_H
#define SHAPE_H

struct Point{
  float x;
  float y;
};

class Shape{
 public:
  virtual std::string get_name() const{};

  virtual float compute_area() const{};

  
  virtual Shape* create() const{};

  virtual Shape* clone() const{};

  virtual ~Shape() {};

}

#endif
