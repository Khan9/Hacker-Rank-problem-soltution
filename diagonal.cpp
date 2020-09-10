#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,sum_r=0,sum_l=0;
    cin >> n;
    int a[n*n];

    for(i=1;i<=n*n;i++)
    {
        cin >> a[i];
    }

        for(int i=1;i<=n*n;i=i+n+1)
    {
        sum_l = sum_l + a[i];
    }

    for (int i = n;i<n*n;i=i+(n-1))
    {
        sum_r = sum_r + a[i];

    }
    cout << abs(sum_r - sum_l) <<endl;

}
