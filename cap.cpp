#include<iostream>
using namespace std;
int main()
{
cout << "hello we are known about how to use loops in c++\n";// spl for loop
int sum,n,i;
cout << "enter the value n \n";// sum of n natural numbers
cin >> n;
i=1,sum=0;
for(i;i<=n;i++)
{
    sum=sum+i;
}
cout << "sum of n natural numbers is : " << sum ;

    return 0;
}