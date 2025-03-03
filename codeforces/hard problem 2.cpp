#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>> t;

    while( t-- ){
        int m,a,b,c;
        cin>> m>> a>> b>> c;

        int count = 0;
        if( a > m && m>=b && m>=c){
            count = m+b+c;
        }
        else if(  b > m && m>=c && m>=a){
            count = m+c+a;
        }
        else if( c > m && m>=a && m>=b)
        {
            count = m + a + b;
        }
        else if( m == a && m==b && m==c){
            count = m + m;
        }
        else{
            count = a+b+c;
        }

        cout<< count<<endl;
    }

    return 0;
}
