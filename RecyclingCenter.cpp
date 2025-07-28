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
	    ll n,i,c;
	    cin>>n>>c;
	    ll a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n,greater<ll>());
	    ll factor=1;
	    ll ans=0;
	    for(i=0;i<n;i++)
	    {
	        if(factor*a[i]>c)
	        {
	            ans++;
	        }
	        else
	        {
	            factor*=2;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
