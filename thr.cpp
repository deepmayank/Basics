#include <iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout << "enter the value of no of rows\n";
    cin >> m;
    for(i=1;i<=m;i++)
    {
        int space;
        for(space=m;space>=i;space--)
        {
            cout << " ";
        }
        for (j=1;j<=i;j++)
        {
            cout << j;
    } for (j=i-1;j>0;j--)
    {
        cout << j;
    }
    cout << endl; 
    }
    return 0;
}