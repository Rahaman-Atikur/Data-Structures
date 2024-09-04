#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st1;
    stack<int> st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        st2.push(y);
    }
    int flag =0;
    if (st1.size() != st2.size())
    {
      flag =1;
    }
    if (st1.size() == st2.size())
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = 1;
                break;
            }
            st1.pop();
            st2.pop();
        }
    }

    if (flag == 1)
    {
        cout << "Given Stack are not  same";
    }
    else
    {
        cout << "Given Stack are  same";
    }
    return 0;
}