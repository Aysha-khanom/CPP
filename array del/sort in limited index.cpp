#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[14] = {7,1,4,9,4,2,1,78,45,14,5,7,0,13};

    sort(a+4,a+8);

    for(int i=0; i<14; i++)
    {
        cout << a[i] << " ";
    }


}
