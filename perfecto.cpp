#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes printf("YES\n")
int main() {
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i,temp=0;
	    cin>>n;
	    ll u=(n*(n+1));
	    u/=2;
	    ll sq=sqrt(u);
	    if(sq*sq==u)
	        cout<<-1<<endl;
	    else
	    {
	        ll sum=0;
	        set<ll>st;
	        vector<ll>ans;
	        for(i=1;i<=n;i++)
	            st.insert(i);
	        while(!st.empty())
	        {
	            for(auto it=st.begin();it!=st.end();it++)
	            {
	                temp=sum+(*it);
	                u=sqrt(temp);
	                if(u*u!=temp)
	                {
	                    ans.push_back((*it));
	                    sum+=(*it);
	                    st.erase(it);
	                    break;
	                }
	            }
	        }
	        for(i=0;i<n;i++)
	            cout<<ans[i]<<" ";
	        cout<<endl;
	    }
	}
	return 0;

}
