#include<iostream>
using namespace std;
int
main ()
{
  int year;
  cin >> year;
  if(year>1919)
  {
  if (year % 4 == 0)
    {
      if (year % 100 == 0)
    {
      if (year % 400 == 0)
        cout <<"12.09."<<year;
      else
        cout <<"13.09."<<year;
    }
      else
    cout <<"12.09."<<year;
    }
  else
    cout <<"13.09."<<year;
  }
  else
  {
      if(year%4==0)
      cout<<"12.09."<<year;
      else
      cout<<"13.09."<<year;
  }
}
