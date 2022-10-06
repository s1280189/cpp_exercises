#include<stdio.h>
#include<stdlib.h>
int parity(unsigned long x){
  int count=0;
  while(x!=0){
    if(x%2==1){
      count++;
      x=(x)/2;
    }
    else if(x%2==0){
      x=(x)/2;
    }
  }

  if(count%2==1)
    return 0;
  else
    return 1;
}

int main(){
  unsigned long x;
  scanf("%lo",&x);
  printf("%d\n",parity(x));
  return 0;
}
