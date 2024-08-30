#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = false;
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] > a[i + 1] )
            {
                flag = true;
                break;
            }
            
        }
        if (flag == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}