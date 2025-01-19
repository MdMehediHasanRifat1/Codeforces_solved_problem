#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,ans=0;
        cin>>n>>k;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll l=0,h=n-1;
        while(l<h)
        {
            if(a[l]+a[h]==k)
            {
                l++;
                h--;
                ans++;
            }
            else if(a[l]+a[h]>k)
            {
                h--;
            }
            else
            {
                l++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;

}