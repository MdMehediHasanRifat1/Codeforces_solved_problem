#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
		ll n,i;
		ll ans=0;
		ll l=0,r=0,d=0,u=0;
		cin>>n;
		char a;
		for(i=0;i<n;i++)
		{
			cin>>a;
			if(a=='L')
				l++;
			if(a=='R')
				r++;
			if(a=='U')
				u++;
			if(a=='D')
				d++;
		}
		ans=2*min(l,r)+2*min(u,d);
		cout<<ans<<endl;
	return 0;
}