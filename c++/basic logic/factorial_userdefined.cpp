# include <iostream>
using namespace std;

int fact(int n)
{
  int i,f=1;
  for (i=1;i<=n;i++)
    {
      f=f*i;
    }
  return f;
}
int main()
{
  int n,result;
  cout<<"input the number";
  cin>>n;
  result=fact(n);
cout<<"factorial of"<<num<<"is"<<result;
return 0;
}
