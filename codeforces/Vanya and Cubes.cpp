#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,ans;
    cin >> n;

    int i=1;
    double out;
    while(sum<=n)
    {
        sum+=i;
        ans=i;
        i++;
    }
    out = (1.0)*n/ans;
    out = round(out);
    cout << out << endl;
}
