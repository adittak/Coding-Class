#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; // 1 - 4 byte
    cin>>n; // 1

    for(int i=0;i<n;i++) // 4 byte
    {
        cout << "Something #" << i+1 << endl; // n
    }

    // time complexity: f(n)=n, proportionate to n

    for(int i=0;i<n;i++) // n
    {
        for(int j=0;j<n;j++) // n
        {
            cout << "something" << endl;
        }
    } // n x n          //nested loops are not good

    int m;
    cin>>m; // 100

    while(m >= 1)
    {
        m = m / 10; // m/10, m/100
    }


    for(int i=0;i<n;i++) // 4 byte
    {
        cout << "Something #" << i+1 << endl; // n
    }

    for(int i=0;i<m;i++) // 4 byte
    {
        cout << "Something #" << i+1 << endl; // m
    }

    // O(n+m)

    return 0;


    /*
    array: 200, 3, 5, 10, 78...
    10? -> 4
    200? -> 1 : best case scenario - 1
    78? -> 5 : worst case scenario - n
    (1+2+...+n)/n
    summation: n(n+1)/2 */
}
