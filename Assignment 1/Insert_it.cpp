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
    int m;
    cin>>m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int x;
    cin>>x;
    vector<int> v3(n+m);
    v3.insert(v3.begin(), v1.begin(), v1.end());
    v3.insert(v3.begin() + x, v2.begin(), v2.end());
    
    for (int i = 0; i < (n+m); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}