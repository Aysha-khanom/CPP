#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,product=1;
        cin >> n;
        vector<int> vec;

        for(int i=0; i<n; i++)
        {
            cin >> vec[i];
        }

    sort(vec.begin(),vec.end());
    for(int i=0; i<n; i++)
        {
    cout << vec[i] << " ";
        }
//         for(int i=1; i<n; i++)
//        {
//         //  product*=vec[i];
//        }

//        vec[0]+=1;
//        product*=vec[0];
//
//        cout << product << endl;
    }
}
