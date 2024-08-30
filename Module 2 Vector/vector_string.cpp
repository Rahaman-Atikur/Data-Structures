#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(string val:v)
    {
        val[0] = toupper(val[0]);
        cout<<val<<endl;
    }
    return 0;
}