#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin >> n;

    int limit = n*2-1;
    int flag = 0;
    for(int i=1; i<=limit; i++)
    {
        if(i%2!=0)
        {
            if(flag == 0)
            {
                cout << "I hate " ;
                flag = 1;
            }
            else
                {
                    cout << "I love ";
                    flag = 0;
                }
        }
        else
            cout << "that ";
    }

    cout << "it";
}
