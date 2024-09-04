#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> qu;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        qu.push(y);
    }
    int flag = 0;
    if (st.size() != qu.size())
    {
        flag = 1;
    }
    if (st.size() == qu.size())
    {
        while (!st.empty())
        {
            if (st.top() != qu.front())
            {
                flag = 1;
                break;
            }
            st.pop();
            qu.pop();
        }
    }
    if (flag == 1)
        cout << "Stack and Queue are not same";
    else
        cout << "Stack and Queue are same";
    return 0;
}