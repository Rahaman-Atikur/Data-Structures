#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30,40,50,60,70};
    list<int> anotherList;
    anotherList = myList;       // Copy
    //  anotherList.insert(next(anotherList.begin(),4),100);
    // anotherList.erase(next(anotherList.begin(),3),next(anotherList.begin(),4));
    // anotherList.pop_front();
    // replace(anotherList.begin(),anotherList.end(),10,500000);
    // for (int val : anotherList)
    // {
    //     cout << val << " ";
    // }
   auto it= find(anotherList.begin(),anotherList.end(),50);//this function returns pointers
    if( it == anotherList.end()) cout<<"Not found";
    else cout<<"Found";

    return 0;
}