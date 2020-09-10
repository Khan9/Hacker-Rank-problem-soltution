#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,j,c=0;
    cin >>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >>a[i];
    }

    for(i=0;i<n;)
    {
        cout << "I :" <<i <<endl;
        if(a[++i] == 0)
        {
            if(a[++i]==0)
            {
                c++;
            }
            else{
                i--;
                c++;
            }

        }
        else{
            i=i+1;
            c++;
        }

    }
    cout <<c-1 <<endl;
}
