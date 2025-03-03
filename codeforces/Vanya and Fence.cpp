#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin >> n >> h;

    int sum=0;
    while(n--)
    {
        int a;
        cin >> a;

        if(a<=h)
            sum++;
        else
            sum+=2;
    }
    cout << sum << "\n";
}
