#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i;
	    cin>>n;
	    ll a[n],b[n];
	    ll len=0,ind=n-1;
	    map<ll,ll>mp1;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        mp1[a[i]]=i;
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    ll ans=0;
	    for(i=n-1;i>=0;i--)
	    {
	        if(mp1[b[i]]<=ind)
	        {
	            len++;
	            ind=mp1[b[i]];
	        }
	        else
	        {
	            break;
	        }
	        //cout<<"Len = "<<len<<endl;
	        ans=max(ans,len);
	    }
	    cout<<n-ans<<endl;
	    
	}
	return 0;

}
