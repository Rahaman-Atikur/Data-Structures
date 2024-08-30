#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    vector<int> v3(2 * n);
    v3.insert(v3.begin(), v2.begin(), v2.end());
    v3.insert(v3.begin() + n, v1.begin(), v1.end());
    
    for (int i = 0; i < 2 * n; i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}