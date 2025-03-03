#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    int se=0,di=0;
   int left=0, right=n-1;
   bool True =1;
   while(left <= right)
   {
       int pick = (a[left] >= a[right])?  a[left++] : a[right--] ;
       if (True)
        se+=pick;
       else
        di+=pick;

       True = !True;

   }

    cout << se << " " << di << endl;

}
