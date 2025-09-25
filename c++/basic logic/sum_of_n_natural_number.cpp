#include <iostream>
using namespace std;
int main()
{
  int n,sum,1 ;
  cout<<"enter a positive number";
  cin>>n;
  sum=0;
  for(i=1;i<=n;i++)
    {
      sum=i+i;
    }
  cout<<"the sum of th first "<<n<<"natural number is: "<<sum;
  return 0;
}
