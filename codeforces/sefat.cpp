// peak index in mountain array

#include<iostream>
#include<vector>
using namespace std;


class Solution
{
public:

    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;

        int mid = start + (end - start) / 2 ;

        while (start < end)
        {
            if( arr[mid] < arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }

            mid = start + (end - start) / 2;
        }

        return start;

    }
};

int main()
{
   int n;
   cin >> n;

   vector<int>arr;

   for(int i=0; i<n; i++)
   {
       int x;
       cin >> x;
       arr.push_back(x);
   }


}


//etar int main() function tay array input kemne nibo.. ektu thik kore de code
