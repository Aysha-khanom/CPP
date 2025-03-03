#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i;
    cin >> a >> b >> c;
    int flag=0;

    for(i=1; i<=10; i++)
    {
        if(c*i >= a && c*i <= b)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        cout << c*i << endl;
    else
        cout << "-1" << endl;

}
