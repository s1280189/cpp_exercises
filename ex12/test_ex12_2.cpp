#include "ex12_2.h"

int main(){
  std::list<Point> ls;
  
  Point p1(1, 1, 1), p2(2, 2, 2),
    p3(3, 3, 3), p4(4, 4, 4), p5(5, 5, 5);
  int k=3;

  ls.push_front(p5);
  ls.push_front(p3);
  ls.push_front(p1);
  ls.push_front(p4);
  ls.push_front(p2);

  ls = find_k_closest_lambda(k, ls);

 for(auto i=ls.begin(); i!=ls.end(); i++){
    Point a=*i;
    std::cout<< a.x <<"," << a.y<<"," <<a.z << std::endl;
  }


  return 0;
}
