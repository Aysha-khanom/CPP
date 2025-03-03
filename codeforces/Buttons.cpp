#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin >> a >> b;

    vector<int>vec;
    vec.push_back(a);
    vec.push_back(b);

    auto maxv = *max_element(vec.begin(),vec.end());
    auto minv = *min_element(vec.begin(),vec.end());
    int temp = maxv;
    sum+=temp;
    temp--;

    if(minv > temp)
        sum+=minv;
    else
        sum+=temp;

    cout << sum << endl;
}
