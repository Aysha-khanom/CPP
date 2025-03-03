#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x,E=5,CNT=1;
 cin >> x;

    while(E < x)
    {
        E+=5;
        CNT++;
    }
    cout << CNT << endl;
}
