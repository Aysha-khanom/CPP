#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {1,3,7,5,2};
    int index=2;

    for(int i=5; i>=0; i--)
    {
        if(i == index)
        {
           a[i]=45;
           break;
        }
        a[i] = a[i-1];
    }

 for(int i=0; i<6; i++)

    {
        cout << a[i] << " ";
    }

}
