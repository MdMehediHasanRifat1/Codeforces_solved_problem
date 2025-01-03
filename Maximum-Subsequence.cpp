#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m,i,j,ans=0;
	cin>>n>>m;
	ll a[n/2],b[(n+1)/2];
	for(i=0;i<n/2;i++)
	{
		cin>>a[i];
	}
	for(i=n/2;i<n;i++)
	{
		cin>>b[i-(n/2)];
	}
	ll N=(n/2);
	vector<ll>v1,v2;
	for(i=0;i<(1<<(n/2));i++)
	{
		ll sum=0;
		for(j=0;j<N;j++)
		{
			if(i&(1<<j))
			{
				sum+=a[j]%m;
			}
			sum%=m;
		}
		v1.push_back(sum);
	}
	sort(v1.begin(),v1.end());
	N=(n+1)/2;
	for(i=0;i<(1<<(n+1)/2);i++)
	{
		ll sum=0;
		for(j=0;j<N;j++)
		{
			if(i&(1<<j))
			{
				sum+=b[j]%m;
			}
			sum%=m;
		}
		v2.push_back(sum);
	}
	sort(v2.begin(),v2.end());
	v1.erase(unique(v1.begin(),v1.end()),v1.end());
	v2.erase(unique(v2.begin(),v2.end()),v2.end());

	for(i=0;i<v1.size();i++)
	{
		ll s=m-v1[i];
		ll ind=lower_bound(v2.begin(),v2.end(),s)-v2.begin();
		ind--;
		ans=max(ans,(v2[ind]+v1[i])%m);
	}
	cout<<ans<<endl;
    return 0;
}