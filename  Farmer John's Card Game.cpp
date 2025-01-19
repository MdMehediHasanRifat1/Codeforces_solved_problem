#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j;
        cin>>n>>m;
        ll a[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            sort(a[i],a[i]+m);
        }
        
        ll v[n],c=0;
        
        for(i=0;i<n;i++)
            v[i]=-1;
            
        for(i=0;i<n;i++)
        {
            ll st=a[i][0];
            ll temp=st;
            bool f=1;
            for(j=1;j<m;j++)
            {
                if(a[i][j]==temp+n)
                {
                    temp+=n;
                }
                else
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                v[st]=i+1;
                c++;
            }
            else
                break;
        }
        
        if(c==n)
        {
            for(i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;

}