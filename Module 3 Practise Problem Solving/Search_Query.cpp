#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int q;
    cin >> q;
    
    while (q--)
    {
        bool flag = false;
        int targetValue;
        cin >> targetValue;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {

            int midIndex = (l + r) / 2;
            if (a[midIndex] == targetValue)
            {
                flag = true;
                break;
            }

            if (targetValue > a[midIndex])
            {
                l = midIndex + 1;
            }
            else
            {
                r = midIndex - 1;
            }
        }

        if (flag == true)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
        
    }
    return 0;
}