#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sod(ll n)
{
    ll sum=0,r;
    while(n)
    {
        r=n%10;
        sum=sum+r;
        n/=10;
    }
    return sum;
}
int main() {
	ll a,b,c;
	cin>>a>>b>>c;
	vector<ll>v;
	for(ll i=1;i<=100;i++)
	{
	    ll x=b*pow(i,a)+c;
	    if(sod(x)==i&&x<=1000000000)
	        v.push_back(x);
	}
	a=v.size();
	cout<<a<<endl;
	for(b=0;b<a;b++)
	{
	    cout<<v[b]<<" ";
	}
	cout<<endl;
	return 0;
}
