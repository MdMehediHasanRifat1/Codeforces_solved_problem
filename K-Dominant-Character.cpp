#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int i,j,n,ans=1e9;
	n=s.size();
	vector<int>v[27];
	for(i=1;i<=26;i++)
	{
		v[i].push_back(0);
		v[i].push_back(n+1);
	}
	for(i=0;i<n;i++)
	{
		v[s[i]-96].push_back(i+1);
	}
	for(i=1;i<=26;i++)
	{
		sort(v[i].begin(),v[i].end());
	}
	for(i=1;i<=26;i++)
	{
		int diff=0;
		for(j=1;j<v[i].size();j++)
		{
			diff=max(diff,v[i][j]-v[i][j-1]);
		}
		ans=min(diff,ans);
	}
	cout<<ans<<endl;
	return 0;
}