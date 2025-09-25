#include <iostream>
using namespace std;
void swap(int &x,int &y)
{
  int t;
  t=x;
  x=y;
  y=t;
}
int main()
{
  int a,b;
  cout<<"enter the values of a and b";
  cin>>a>>b;
  cout<<"\n before swapping \n";
  cout<<"a= "<<a<<"b= "<<b;
  swap(a,b);
  cout<<"\nafter swap\n";
  cout<<"a= "<<a<<"b= "<<b;
  return 0;
}
