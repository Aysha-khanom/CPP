#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,3,7,5,2};
    int arr2[4];

    for(int i=0,j=0; i<5; i++)
    {
        if(arr[i] != 5)
        {
            arr2[j] = arr[i];
            j++;
        }
    }

     for(int j=0; j<4; j++)
    {
    cout << arr2[j];}
}
