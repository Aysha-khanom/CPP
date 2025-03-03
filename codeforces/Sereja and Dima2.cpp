#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    int se=0,di=0;
    while(!a.empty())
    {
        if (a.front() >= a.back())
        {
            se+=a.front();
            a.erase(a.begin());
        }
        else
        {
            se+=a.back();
            a.pop_back();
        }

        if (a.front() >= a.back())
        {
            di+=a.front();
            a.erase(a.begin());
        }
        else
        {
            di+=a.back();
            a.pop_back();
        }


    }
    cout << se << " " << di << endl;

}
