#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int rating;
        cin >> rating;

        if(1900 < rating || rating == 1900)
            cout << "Division 1" << endl;
        else if(1600 < rating || rating == 1600 && rating < 1899 || rating == 1899)
            cout << "Division 2" << endl;
        else if(1400 < rating || rating == 1400 && rating < 1599 || rating == 1599)
            cout << "Division 3" << endl;
        else if(rating < 1399 || rating == 1399)
            cout << "Division 4" << endl;
    }
}
