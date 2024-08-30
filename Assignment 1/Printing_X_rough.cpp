#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int i,j;
    
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j]<<" ";
            
        }
        if(i==n/2)
        {
            cout<<"X";
        }
        cout<<endl;
    }
    return 0;
}