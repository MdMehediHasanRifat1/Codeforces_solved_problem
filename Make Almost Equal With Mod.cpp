#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll t,i,j;
    cin>>t;
    ll p[63];
    p[0]=1;
    for(i=1;i<62;i++)
    {
        p[i]=p[i-1]*2;
    }
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],e=0,o=0,ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
                if(a[i]%2==1)
                    e++;
                else
                    o++;
        }
        if(o>0&&e>0)
            cout<<2<<endl;
        else
        {
            for(i=1;i<61;i++)
            {
                set<ll>st;
                for(j=0;j<n;j++)
                {
                    st.insert(a[j]%p[i]);
                }
                if(st.size()==2)
                {
                    ans=p[i];
                    break;
                }
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}