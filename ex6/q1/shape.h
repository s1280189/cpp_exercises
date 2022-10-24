#include<string>
#include<iostream>
#ifdef SHAPE_H
#define SHAPE_H


class Shape{
 public:
  virtual std::string get_name() const=0;

  virtual float compute_area() const=0;

  
  virtual Shape* create() const=0;

  virtual Shape* clone() const=0;

  virtual ~Shape() =0;

}

#endif
