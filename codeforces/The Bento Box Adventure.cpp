#include<bits/stdc++.h>
using namespace std;
int main()
{
   int sum = 1+2+3+4+5,sum2=0;
   vector<int> vec(4);

   for(int i=0; i<4; i++)
   {
       cin >> vec[i];
       sum2+=vec[i];
   }

    cout << sum-sum2 << endl;
}
