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
    int l = 0;
    int r = n - 1;
    bool flag = false;
    int targetValue;
    cin >> targetValue;
    while (l <= r)
    {
        int midIndex = (l + r) / 2;
        if (a[midIndex] == targetValue)
        {
            if (midIndex != 0 && a[midIndex - 1] == targetValue || midIndex != n - 1 && a[midIndex + 1] == targetValue)
            {
                flag = true;
                break;
            }
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
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}