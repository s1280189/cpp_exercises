#include "rectangle.cpp"
#include "disk.cpp"

int main(){
  Rectangle rec1;
  Rectangle rec2(rec1);


  Disk disk1;
  Disk disk2(disk1);

  return 0;
}
