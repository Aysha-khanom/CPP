#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int x,y;
    set <int> s;

    cin >> x;
    while(x--)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    cin >> y;
    while(y--)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    int siz = s.size();
    if(siz == n || siz > n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}
