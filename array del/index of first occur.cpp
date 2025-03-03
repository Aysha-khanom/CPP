#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[15] = {1,2,3,3,3,4,7,8,8,8,8,8,8,9,13};
    int index;

    for(int i=0; i<15; i++)
    {
        if(a[i] == 8)
        {
            index = i;
            break;
        }
    }

    cout << index;




}
