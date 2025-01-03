#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		ll ind,n,i;
		cin>>ind;
		ind--;
		n=a.size();
		if(ind<n)
			cout<<a[ind];
		else
		{
			ll block=0;
			for(block=0;block<=n;block++)
			{
				if(ind-(n-block)>=0)
				{
					ind-=(n-block);
				}
				else
				{
					break;
				}
			}
			ll size=0;
			string ans="";
			for(i=0;i<n;i++)
			{
				while(size>0&&ans[size-1]>a[i]&&block>0)
				{
					ans.pop_back();
					size--;
					block--;
				}
				ans+=a[i];
				size++;
			}
			cout<<ans[ind];
		}
	}
	return 0;
}