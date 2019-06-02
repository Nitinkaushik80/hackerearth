#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
void  oddbitaddition(ll n)
{
    ll res;
    for(int i=0;i<65;i++)
    {
        res=n & 1<<i;
        if(res==0)
        {
            res=n | 1<<i;
            cout<<res<<endl;
            break;
        }
    }
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           ll n;
           cin>>n;
           if(n%2==0)
            cout<<n+1<<endl;
            else
                oddbitaddition(n);
       }
}

