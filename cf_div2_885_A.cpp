#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main ()
{

    int t; cin>>t;
    while (t--)
    {
        int n,m,k; cin>>n>>m>>k;
        int a[k+1], b[k+1], x, y; cin>>x>>y;
        bool flag=true;         
        for (int i=1;i<=k;i++) 
        {
            cin>>a[i]>>b[i];
            if ((a[i]+b[i]-x-y)%2==0) flag=false;
        }
        if (!flag) cout<<"NO\n"; else cout<<"YES\n";
    }
}