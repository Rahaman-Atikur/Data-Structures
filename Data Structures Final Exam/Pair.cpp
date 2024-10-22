#include <bits/stdc++.h>
using namespace std;

// class cmp
// {
//     public:
//     bool operator()(pair<string, int> &a, pair<string, int> &b)
//     {
//     if (a.first == b.first)
//         return (a.second >= b.second);
//     else
//         return (a.first <= b.first);
// }

// };

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first == b.first)
        return (a.second >= b.second);
    else
        return (a.first <= b.first);
}

int main()
{
    vector<pair<string, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int val;
        cin >> val;
        v.push_back({s, val});
    }

    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        cout << it.first << " " << it.second;
        cout << endl;
    }

    return 0;
}