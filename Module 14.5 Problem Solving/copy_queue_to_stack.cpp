#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> qu;
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    while (!qu.empty())
    {
        st.push(qu.front());
        qu.pop();
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}