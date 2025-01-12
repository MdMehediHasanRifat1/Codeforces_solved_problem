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
	    ll n,i;
	    cin>>n;
    	ll a[n],b[n],mn=1e18;
    	for(i=0;i<n;i++)
    	{
    	    cin>>a[i];
    	}
    	for(i=0;i<n;i++)
    	{
    	    cin>>b[i];
    	    a[i]=a[i]-b[i];
    	    mn=min(mn,a[i]);
    	}
    	ll c=0;
    	if(mn<0)
    	{
    	    for(i=0;i<n;i++)
    	    {
    	        if(a[i]+mn<0)
    	            c++;
    	        if(c>1)
    	        {
    	            break;
    	        }
    	    }
    	    if(c>1)
    	        no;
    	    else
    	        yes;
    	}
    	else
    	{
    	    yes;
    	}
	}
	return 0;

}
