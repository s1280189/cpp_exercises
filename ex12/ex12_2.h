#ifndef EX12_2_H
#define EX12_2_H
#include<iostream>
#include<sstream>
#include<cmath>
#include<list>
#include<queue>
#include<algorithm>

struct Point{
Point(): x(0.0), y(0.0), z(0.0) {}
Point(double x,double y,double z):x(x), y(y), z(z) {}
  double x,y,z;
};

auto compare[]=(const Point fir, const Point sec){
    if( sqrt((fir.x * fir.x )+(fir.y*fir.y)+(fir.z*fir.z))
	< sqrt((sec.x*sec.x)+(sec.y*sec.y)+(sec.z*sec.z)))
      return true;

    else
      return false;
};



std::list<Point> find_k_closest_lambda(int k, std::list<Point> point){
  
  std::priority_queue<
    Point,
    std::vector<Point>,
    decltype(compare)
    > queue(compare);
  
  std::list<Point> ls;

 while(!point.empty()){
    queue.push(point.front());
    point.pop_front();
  }


  while(!queue.empty()){
	  ls.push_front(queue.top());
	  queue.pop();
  }

  for(int i=0;i<ls.size()-(k-1);i++){
	  ls.pop_back();
  }
  
  return ls;
}
    
    


#endif
