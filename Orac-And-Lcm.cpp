#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,i;
	cin>>n;
	ll a[n],b[n];
	for(i=0;i<n;i++)
	    cin>>a[i];
	b[n-1]=a[n-1];
	for(i=n-2;i>=0;i--)
	{
	    b[i]=gcd(b[i+1],a[i]);
	}
	ll temp=0,ans=0;
	for(i=1;i<n;i++)
	{
	    temp=a[i-1]*b[i];
	    temp/=gcd(a[i-1],b[i]);
	    ans=gcd(ans,temp);
	}
	cout<<ans<<endl;
    return 0;
}
