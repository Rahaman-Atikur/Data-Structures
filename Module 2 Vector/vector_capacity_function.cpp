#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    v.resize(10,100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;

    cout<<"size = "<<v.size()<<endl;
    cout<<"Maximum size = "<<v.max_size()<<endl;
    cout<<"Capacity of the vector = "<<v.capacity()<<endl;
    return 0;
}