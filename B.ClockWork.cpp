#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes printf("YES\n")
#define no printf("NO\n")

int main() {
	
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a;
        vector<pair<ll,ll>>v;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back({a,max(n-i-1,i)});
        }
        sort(v.begin(),v.end());
        bool f=1;
        ll p,q;
        
        for(i=0;i<n;i++)
        {
            p=v[i].first;
            q=v[i].second;
            if(2*q>=p)
            {
                f=0;
                break;
            }
        }
        if(n==1)
        {
            if(v[0].first==1)
                f=0;
        }
        if(f)
            yes;
        else
            no;
    }
	return 0;

}