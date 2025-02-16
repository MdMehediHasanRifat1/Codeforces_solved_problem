#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes printf("YES\n")
#define no printf("NO\n")
int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m,i;
	    cin>>n>>m;
	    ll a[n],b[m];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    sort(b,b+m);
	    bool f=1;
	    ll mx=-1e18;
	    for(i=0;i<n;i++)
	    {
	        ll temp1=1e18,temp2=1e18;
	        if(mx<=a[i])
	        {
	            temp1=a[i];
	        }
	        ll s=mx+a[i];
	        ll ind=lower_bound(b,b+m,s)-b;
	        if(ind!=m)
	        {
	            temp2=b[ind]-a[i];
	        }
	        if(min(temp1,temp2)==1e18)
	        {
	            f=0;
	            break;
	        }
	        mx=min(temp1,temp2);
	    }
	    if(f)
	        yes;
	    else
	        no;
	}
	return 0;

}
