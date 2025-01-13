#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
ll a[1005][1005];
ll func(ll row,ll col,char ch)
{
    ll ans=0;
    if(ch=='D')
    {
        for(ll i=0;i<m;i++)
        {
            ans+=a[row][i];
        }
    }
    else
    {
        for(ll i=0;i<n;i++)
        {
            ans+=a[i][col];
        }
    }
    return -ans;
}
int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll i,j;
	    cin>>n>>m;
	    string s;
	    cin>>s;
	    ll x=0,y=0;
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    
	    ll row=0,col=0;
	    
	    for(i=0;i<s.size();i++)
	    {
	        if(s[i]=='D')
	        {
	           a[x][y]=func(x,y,'D');
	           x++;
	        }
	        else
	        {
	            a[x][y]=func(x,y,'R');
	            y++;
	        }
	    }
	    
	    a[n-1][m-1]=func(n-1,m-1,'D');
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;

}