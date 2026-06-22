#include<iostream>
using namespace std;
int main()
{
    cout << "hello we are doing sum of all odd numbers between 1 to n\n";
    int i,sum,n;
    cout << " enter the value of n\n";
    cin >> n;
    i=1,sum=0;
    for (i;i<=n;i=i+2)
    {
      sum=sum+i;
    }
    cout << " the sum of all odd Nos from 1 to "<< n <<": " << sum;
    return 0;

}