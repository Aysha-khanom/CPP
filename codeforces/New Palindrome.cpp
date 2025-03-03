#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;

        int half = a.size()/2,flag=0;

        for (int i = 0; i < half; i++)
        {
            if (a[i] == a[a.size() - 1 - i])
            {
                flag = 1;
                break;
            }
        }
            if(flag == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;

    }
}
