#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes printf("YES\n")
#define no printf("NO\n")
int main() {
	
    ll n,k,i,r,m;
    cin>>n>>k;
    r=n;
    m=k;
    i=31;
    vector<ll>v;
    bool f=0;
    while(1)
    {
        if(r==k)
        {
            f=1;
            break;
        }
        else
        {
            ll temp=pow(2,i);
            if(r-temp>=(k-1)&&k>0)
            {
                v.push_back(temp);
                r-=temp;
                k--;
            }
            else
            {
                i--;
            }
        }
        if(i<0)
            break;
    }
    if(f==1)
    {
        for(i=0;i<k;i++)
        {
            v.push_back(1);
            r--;
        }
    }
    if(v.size()==m&&r==0)
    {
        yes;
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    else
    {
        no;
    }
    
	return 0;
}
