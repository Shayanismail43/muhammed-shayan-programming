#incilude <iostream>
using namespace std;
int main()
{
  float h[10],t;
  int i,n;
  cout<<"enter the number of students";
  cin>>n;
  for(i=1;i<n;i++)
    {
    cout<<"the height of student "<<i<<"is: ";
    cin>>h[i];
    }
  t=h[0];
  for(i=1;i<10;i++)
    {
      if(h[i].>t)
      {
        t=h[i];
      }
    }
  cout<<"the largest height among the student is "<<t;
  return 0;
}
