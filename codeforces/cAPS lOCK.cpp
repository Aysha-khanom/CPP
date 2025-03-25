#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int flag = 1;

    for (int i = 1; i < a.size(); i++)
    {
        if (!isupper(a[i]))
        {
            flag = 0;
            break;
        }
    }

    if (flag==1)
    {

        if (isupper(a[0]))
        {
            a[0] = tolower(a[0]);
        }
        else
        {
            a[0] = toupper(a[0]);
        }

        for (int i = 1; i < a.size(); i++)
        {
            a[i] = tolower(a[i]);
        }
    }

    cout << a << endl;
    return 0;
}
