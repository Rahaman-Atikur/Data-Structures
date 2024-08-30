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
    int midIndex = (l + r) / 2;
    int sumOfLowerIndex = 0;
    int sumOfHigherIndex = 0;
    for (int i = 0; i <= midIndex - 1; i++)
    {
        sumOfLowerIndex += a[i];
    }
    for (int i = midIndex + 1; i < n; i++)
    {
        sumOfHigherIndex += a[i];
    }
    if (sumOfLowerIndex == sumOfHigherIndex)
    {
        cout<<midIndex;
    }

    return 0;
}