
#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>


struct Point {
  int x;
  int y;
};

class Stack {
 public:
 Stack(int max_size=100) : _max_size(max_size),
    _top(-1), data(new Point[max_size]) {}

  ~Stack(){ delete[] _data};


  bool empty() const;

  bool full() const;

  int size() const;

  void push(const Point);

  void pop();

  Point top() const;

 private:
  int _max_size;
  int _top;
  Point* _data;

};

#endif
