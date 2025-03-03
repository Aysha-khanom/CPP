#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1,x2,x3,x4,y1,y2,y3,y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        vector<int>x={x1,x2,x3,x4};

        auto maX = max_element(x.begin(), x.end());
        int a1 = *maX;
        auto miN = min_element(x.begin(), x.end());
        int a2 = *miN;

        cout << (a1-a2)*(a1-a2) << endl;
    }


}
