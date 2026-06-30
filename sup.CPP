#include<iostream>
using namespace std;

int dectobin(int num)
{
    int pow=1,ans,i,rem;
    ans=0;
    for(i=0;num>0;i++)
    {rem=num%2;
        num=num/2;
        ans=rem*pow+ans;
        pow=pow*10;
   }
   
   return ans;

}

int bintodec(int num)
{int i,rem;
    int pow=1;
    int res=0;
    for(i=0;num>0;i++)
    {rem=num%2;
        res=rem*pow+res;
        pow=pow*2;
        num=num/10;
    }

    return res;

}

int main()
{ 
    int num,i;
   cout << " choose 1 for Binary to Decimal and 2 for Decimal to binary ";
    cin >> i;

    cout << "enter the value of number ";
    cin >> num;

    if (i==1)
    { cout <<" you choose " <<i << " = Binary to Decimal/n" << endl;
        cout << bintodec(num) << endl; }
    
     else if(i==2)
       { cout << "you choose "<< i << " = Decimal to Binary/n" << endl;
        cout << dectobin(num) << endl;}
    
    return 0;
}