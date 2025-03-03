#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,b;
    cin >> r >> b;

    vector<int>vec;
    vec.push_back(r);
    vec.push_back(b);
    int firstOutput = *min_element(vec.begin(),vec.end());
    int maxe = *max_element(vec.begin(),vec.end());

    int secondOutput = (maxe-firstOutput)/2;
    cout << firstOutput << " " << secondOutput << endl;




}
