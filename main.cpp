#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t ,n, i,r, temp ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        int a[n] ;
        for(i=0;i<n;i++)
            cin >> a[i] ;
        cin >> r ;
        temp = 1 ;
        for(i=0;i<n;i++)
        {
            temp = (temp*a[i])/gcd(temp, a[i]) ;
        }
        cout << temp+r ;
    }
    return 0;
}
