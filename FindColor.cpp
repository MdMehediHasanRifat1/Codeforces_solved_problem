#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	
	ll x,y;
	cin>>x>>y;
	ll len;
	double l;
	l=sqrt(x*x+y*y);
	len=l;
	bool f=0;
	if(abs(l-len)<0.0000000001)
	{
	    f=1;
	}
	if(x*y>=0)
	{
	    if(f)
	    {
	        cout<<"black"<<endl;
	    }
	    else
	    {
	        if(len%2==0)
	        {
	            cout<<"black"<<endl;
	        }
	        else
	        {
	            cout<<"white"<<endl;
	        }
	    }
	}
	else
	{
	    if(f)
	    {
	        cout<<"black"<<endl;
	    }
	    else
	    {
	        if(len%2==0)
	        {
	            cout<<"white"<<endl;
	        }
	        else
	        {
	            cout<<"black"<<endl;
	        }
	    }
	}
	return 0;
}
