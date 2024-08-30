#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin >> s;
    
    int len = strlen(s);
    int cnt[26] = {0};
    for (int i = 0; i <len ; i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }
    for (int i = 0; i <len; i++)
    {
        cout << cnt <<endl;
    }

    return 0;
}