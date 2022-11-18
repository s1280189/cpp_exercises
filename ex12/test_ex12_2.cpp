#include "ex12_1.h"

int main(){
  std::list<Point> ls;
  
  Point p1(1, 1, 1), p2(2, 2, 2),
    p3(3, 3, 3), p4(4, 4, 4), p5(5, 5, 5);
  int k=3;

  ls.push_front(p5);
  ls.push_front(p3);
  ls.push_front(p1);
  ls.push_front(p4);
  ls.push-front(p2);

  ls = find_k_closet(k, ls);

  std::for_each(ls.cbegin(), ls.cend(), [](Point p)){
    std::cout << "x= " << p.x
	      << "|y= " << p.y
	      << "|z= " << p.z << " |" << std::endl;
  }

  return 0;
}
