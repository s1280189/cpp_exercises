#ifndef EX12_1_H
#define EX12_1_H
#include<iostream>
#include<sstream>
#include<cmath>
#include<list>
#include<queue>
#include<algorithm>
#include<iterator>

struct Point{
Point(): x(0.0), y(0.0), z(0.0) {}
Point(double x,double y,double z):x(x), y(y), z(z) {}
  double x,y,z;
};

class Compare {
 public:
  bool operator()(const Point fir, const Point sec){
    if( sqrt((fir.x * fir.x )+(fir.y*fir.y)+(fir.z*fir.z))
	< sqrt((sec.x*sec.x)+(sec.y*sec.y)+(sec.z*sec.z)))
      return true;

    else
      return false;
  }
};



std::list<Point> find_k_closest(int k, std::list<Point> point){
  
  std::priority_queue<
    Point,
    std::vector<Point>,
    Compare
    > queue;
  
  std::ls<Point> ls;

  while(!point.empty()){
    queue.push(point.front());
    point.pop_front();
  }


  for(int i=0;i<queue.size();i++){
	  ls.push_front(queue.top());
	  queue.pop();
  }

  for(int i=0;i<list.size()-k;i++){
	  list.pop_front();
  }
  
  return ls;
}
    
    


#endif
