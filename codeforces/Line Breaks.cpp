#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,maxw;
        cin >> n >> maxw;

        vector<string>vec;
        for(int i=0; i<n; i++)
        {
            string x;
            cin >> x;
            vec.push_back(x);
        }

       int sum=0,out=0;
       for(int i=0; i<n; i++)
        {
         int len = vec[i].size();
         sum+=len;
         if(sum <= maxw)
            out++;
        }

        cout << out << endl;
    }


}
