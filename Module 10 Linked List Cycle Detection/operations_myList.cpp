#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myLinst={70,10,20,30,40,50,60,80};
    // myLinst.remove(10);
    myLinst.sort(greater<int>());
    for(int val:myLinst)
    {
        cout<<val<<" ";
    }
    return 0;
}