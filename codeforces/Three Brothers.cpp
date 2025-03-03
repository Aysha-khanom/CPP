#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1,b=2,c=3;
    int ia,ib;
    cin >> ia >> ib;

    if(ia == a && ib == b || ia == b && ib == a)
        cout << c;
    else if(ia == b && ib == c || ia == c && ib == b)
        cout << a;
    else if(ia == c && ib == a || ia == a && ib == c)
        cout << b;
}
