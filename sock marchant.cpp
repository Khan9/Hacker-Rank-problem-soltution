
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,c=0,v,cf=0;
    cin >> n;
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        v = a[i];
        for(j=i;j<n;j++)
        {
            if (a[j] == v)
            {
                c++;
                a[j]=-999 - j;
            }

        }
        c= c/2;
 b[i]=c;
 c=0;
    }
    for(i=0;i<n;i++)
    {
        cf = cf + b[i];
    }
    cout << cf <<endl;



}



