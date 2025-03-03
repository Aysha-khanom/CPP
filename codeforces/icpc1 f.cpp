#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        double s, area;
        cin >> x >> y >> z;

        s = (x + y + z) / 2.0;
        area = sqrt(s * (s - x) * (s - y) * (s - z));

        area*=area;
        s*=s;

        int gcd = __gcd((int)area, (int)s);
        area/=gcd;
        s/=gcd;
        cout << area << "/" << s << endl;

    }
}
