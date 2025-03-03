#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    vector<int>vec={a,b,c};
    sort(vec.begin(),vec.end());

    int place = vec[1];
    cout << (place-vec[0])+(vec[2]-place) << endl;
}
