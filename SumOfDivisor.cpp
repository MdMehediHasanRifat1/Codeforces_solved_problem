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
    ll n,i,sigmaofn=1,c;
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            c=1;
            while(n%i==0)
            {
                c++;
                n/=i;
            }
            sigmaofn*=(((bigmod(i,c,mod)%mod)+mod-1)%mod)*bigmod((i+mod-1)%mod,mod-2,mod);
        }
    }
    if(n>1)
    {
        sigmaofn*=(((bigmod(n,2,mod)%mod)+mod-1)%mod)*bigmod((n+mod-1)%mod,mod-2,mod);
    }
    cout<<sigmaofn<<endl;
    return 0;
}