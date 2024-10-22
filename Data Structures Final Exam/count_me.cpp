#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     cin.ignore();
     while(t--)
     {
        string s;
        getline(cin,s);
        map<string, int> count;
        
        string word;
        stringstream ss(s);
        int maxCount =0;
        string ansWord;
        while(ss>>word)
        {
           count[word]++;
           if(count[word]>maxCount)
           {
            maxCount = count[word];
            ansWord = word;
           }
        }  
        cout<<ansWord<<" "<<maxCount;
        cout<<endl;
     }
        
    return 0;
}