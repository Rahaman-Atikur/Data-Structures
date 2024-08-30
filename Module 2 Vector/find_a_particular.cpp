#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    auto it =find(v.begin(),v.end(),40);
    if(it==v.end()) 
        cout<<"-1";
    else 
        cout<<"Found";
    return 0;
    
   
}