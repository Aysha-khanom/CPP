#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,coun=1;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        cout << "Case " << coun << ": ";
        int total=a+b+c;
        if(total>=3 && total<=9)
            cout << " perfectus" << endl;
        else
            cout << "invalidum" << endl;
        coun++;
    }
}
