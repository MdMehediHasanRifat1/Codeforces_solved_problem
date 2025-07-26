#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k,i;
	    cin>>n>>k;
	    ll a;
	    map<ll,ll>mp;
	    for(i=0;i<n;i++)
	    {
	        cin>>a;
	        mp[a]++;
	    }
	    ll ans=0;
	    for(i=0;i<=n;i++)
	    {
	        if(mp[i]==0)
	        {
	            ans=i;
	            break;
	        }
	        mp[i+k]+=mp[i]-1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
