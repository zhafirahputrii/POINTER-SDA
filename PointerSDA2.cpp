#include <iostream>
#include <string>
using namespace std;
//ZhafirahNurShadrina
//G1A021028

int main() 
{
  
 int a,b,c;
 int *p1,*p2,*p3;
  
  a=10;
  cout<<"a : "<<a<<"\n";
  
  b=15;
  cout<<"b :"<<b<<"\n";
  
  c=27;
  cout<<"c :"<<c<<"\n";
  
  p1 = &a ;
  cout<<"p1 = "<<&a<<"\n";
  
  p2 = &b ;
  cout<<"p2 = "<<&b<<"\n";
  
  *p1 = c ;
  cout<<"*p1 = "<<c<<"\n";
  
  a = *p2 ;
  cout<<"a = "<<*p2<<"\n";
  
  b = 6 ;
  cout<<"b = 6"<<"\n";
  
  p3 = &b ;
  cout<<"p3 = "<<&b<<"\n";
  
  p3 = &c ;
  cout<<"p3 = "<<&c<<"\n";
  
  *p1 = *p3 ;
  cout<<"*p1 = "<<*p3<<"\n";
  cout<<"*p3 = "<<*p1<<"\n";

}