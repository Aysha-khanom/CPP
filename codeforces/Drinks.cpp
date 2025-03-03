#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0;
    cin >> t;
    int div=t;

    while(t--)
    {
        int a;
        cin >> a;

        sum+=a;
    }
    double ans = (1.0)*sum/div;
    printf("%.12lf",ans);
    cout << endl;
}
