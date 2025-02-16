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
        vector<ll>v;
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;
        }
       
        if(n==2)
        {
            if(v[0]==v[1])
                yes;
            else
                no;
        }
        else
        {
 sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
            bool f=1;
            ll st=v[0],c=n;
            for(i=st;;i++)
            {
                if(mp[i]>=2)
                {
                    mp[i+1]+=(mp[i]-2);
                    c-=2;
                }
                else if(mp[i]==1)
                {
                    f=0;
                    break;
                }
                if(c==0)
                    break;
            }
            if(f)
                yes;
            else
                no;
        }
    }
    return 0;

}