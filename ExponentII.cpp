#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod=1e9+7;
ll bigmod(ll b,ll p,ll m)
{
	if(p==0)
		return 1;
	ll x=bigmod(b,p/2,m)%m;
	x=(x*x)%m;
	if(p%2==1)
		x=(x*b)%m;
	return x%m;
}
int main()
{
	ll n,i,a,b,c;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		ll ans=bigmod(a,bigmod(b,c,mod-1),mod)%mod;
		printf("%lld\n",ans);
	}
	return 0;
}