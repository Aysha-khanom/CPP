#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "we are the champoions";
    int len = str.size();

    int a[29] = {0};
    for(int i=0; i<len; i++)
    {
        a[str[i]-'a']++;
    }

    for(int i=0; i<29; i++)
    {
        if(a[i]==1)
        {
            cout << str[i] << " ";
        }
    }
}
