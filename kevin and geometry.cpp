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
        ll n,i,m,j;
        cin>>n;
        ll a,value;
        vector<ll>v,p;
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;
            if(mp[a]==2)
            {
                p.push_back(a);
            }
        } 
        sort(v.begin(),v.end());
        m=p.size();
        if(m==0)
        {
            cout<<-1<<endl;
        }
        else if(m>=2)
        {
            cout<<p[0]<<" "<<p[0]<<" "<<p[1]<<" "<<p[1]<<endl;
        }
        else
        {
            n=v.size();
            bool f=0;
            ll c=0;
            for(i=0;i<n;i++)
            {
                if(v[i]==p[0])
                    {
                        n--;
                        c++;
                        v.erase(v.begin()+i);
                        i--;
                    }
                if(c==2)
                    break;
            }
            for(i=1;i<n;i++)
            {
                if((v[i]-v[i-1])/2<p[0])
                {
                    cout<<p[0]<<" "<<p[0]<<" "<<v[i-1]<<" "<<v[i]<<endl;
                    f=1;
                    break;
                }
            }
            if(f==0)
                cout<<-1<<endl;
        }
    }
    return 0;

}