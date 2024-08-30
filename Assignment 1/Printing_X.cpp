#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    int s;
    int k;
    s = 0;
    k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==j)
            {
                cout<<"\\";
            }
            else if(i+j==n-1)
            {
                cout<<"/";
            }
            else if(i==n/2)
            {
                cout<<"X";
            }
            else
            {
                cout<<" ";
            }
            cout<<endl;
        }
    }
        

    return 0;
}