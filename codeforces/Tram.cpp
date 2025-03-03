#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int sum=0,capacity=0;
    while(t--)
    {
        int a,b;
        cin >> a >> b;

        sum-=a;
        sum+=b;
        if(capacity < sum){
        capacity=sum;}
    }
    cout << capacity << endl;
}
