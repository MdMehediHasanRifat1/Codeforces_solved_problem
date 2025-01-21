#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes printf("YES\n")
#define no printf("NO\n")
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        vector<ll>v;
        ll a;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        bool f=1;
        //v.erase(unique(v.begin(),v.end()),v.end());
        
        for(i=1;i<v.size();i++)
        {
            if(v[i-1]>v[i])
            {
                f=0;
                break;
            }
            else
            {
                ll temp=min(v[i-1],v[i]);
                v[i-1]-=temp;
                v[i]-=temp;
            }
        }
        if(f==1)
            yes;
        else
            no;
    }
    return 0;

}