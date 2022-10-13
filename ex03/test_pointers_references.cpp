#include<iostream>

int main(){
  //1~4
  std::cout<<"*****//1~4*****" <<std::endl;
  float* f;
  float pi=3.14159f;
  f=&pi;
  std::cout << "content of memory location pointed to by f:"
	    << *f << std::endl;


  //5~9
  std::cout<<"*****//5~9*****"<<std::endl;
  int* ip;
  int a[5]={0,1,2,3,4};
  ip=a;
  std::cout<<"content of a[0]:" << a[0]<<std::endl;
  std::cout<<"Point out ip points to:" << *ip << std::endl;
  ip=ip+2;
  std::cout<<"content of a[0]:" << a[2]<<std::endl;
  std::cout<<"Point out ip points to:" << *ip << std::endl;
  ip=ip+2;
  std::cout<<"content of a[0]:" << a[4]<<std::endl;
  std::cout<<"Point out ip points to:" << *ip << std::endl;


  
  //10~13
  std::cout<< "*****//10~13*****" << std::endl;
  double* d;
  int n=10;
  d= new double[n];

  int i;
  for(i=0;i<n;i++){
    d[i]=double(i)/5.0;
    std::cout<< d[i] << std::endl;
  }
  delete[] d;


  //14~16
  std::cout<<"*****//14~16*****"<<std::endl;
  int m=5;
  n=10;
  int j;
  double** dd;
  dd = new double*[n];
  for(i=0;i<n;++i) dd[i] = new double[m];

  for(i=0;i<n;i++){
    std::cout<<"------If i="<< i << "------"<< std::endl;
    for(j=0;j<m;j++){
      dd[i][j]=double(i)*double(j);
      std::cout<< dd[i][j] << std::endl;
    }
  }
  for(i=0;i<n;++i) delete[] dd[i];
  delete[] dd;



  //17~19
  std::cout<<"*****//17~19*****"<<std::endl;
  float& rf = *f;
  rf = 2.71828;
  std::cout<<"Value rf:"<< rf <<std::endl;
  std::cout<<"Value f:" << *f <<std::endl;


  return 0;
}
  
    

  
