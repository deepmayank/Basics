#include<iostream>
using namespace std;
int main()
{
   cout << " i am here to print the total no of possible prime no from 1 to given no\n";
   int n;
   cout << "enter the value of your no";
   cin >> n;
   int i=8;
   if(n>=7)
   {
   cout << "2\n3\n5\n7\n";}
   else if(n>=5)
   {
    cout << "2\n3\n5";
   }
   else if(n>=3)
   {
    cout << "2\n3";
   }
   else if (n>=2)
   {
    cout <<"2\n";
   }
   else 
   {
    cout << "no ptime no" ;
   }
   for(i;i<=n;i++)
   {
  if(i%2!=0)
  {
    if(i%3!=0)
    {
      if (i%5!=0)
      {
        if(i%7!=0)
        {
          cout << i << "\n";
        }
        else 
        {
          continue;
        }
      }
      else 
        {
          continue;
    }
  }
  else 
  {
    continue;
  }
  
  }
  else 
  {
    continue;
  }
      }
    return 0;

}
