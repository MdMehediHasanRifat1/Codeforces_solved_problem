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
	    ll a[n],mn=1e16;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    bool f=1;
	    ll temp=a[0];
	    for(i=1;i<n;i++)
	    {
	        if(a[i]>=(2*temp))
	        {
	            f=0;
	            break;
	        }
	        temp=min(temp,a[i]);
	    }
	    if(f)
	        yes;
	    else
	        no;
	}
	return 0;
}