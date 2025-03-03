#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3,3,3,4,7,8,8,8,8,8,8,9,13,22,77};
    int n = 0;

    for(int i=0; i<17; i++)
    {
        n = max(n,a[i]);
    }

    int a2[n+1]={0};

    for(int i=0; i<17; i++)
        {
            a2[a[i]]++;
        }
    for(int i=0; i<=n+1; i++)
    {
        if(a2[i]==1)
            cout << i << " ";
    }
}
