#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st, st1;
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
        cin>>y;
        st1.push(y);
    }
    int flag =0;
    if (st.size() != st1.size())
    {
      flag =1;
    }
    if (st.size() == st1.size())
    {
        while (!st1.empty())
        {
            if (st.top() != st1.top())
            {
                flag = 1;
                break;
            }
            st.pop();
            st1.pop();
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