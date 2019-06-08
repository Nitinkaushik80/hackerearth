#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int power_of_two(ll n, ll m)
{
    if(m==0)
        return 1;
    return n*power_of_two(n,m-1);
}
int power_of_two_advanced(ll n, ll m)
{
    ll result=1;
    while(m>0)
    {
        if(m%2==1)
            result=result*n;
        m=m/2;
        n=n*n;
    }
    return result;
}
int inverse_modulo(ll n, ll m)
{
    n=n%m;
    for(int i=1;i<m;i++)
    {
        if((n*i)%m==1)
            return i;
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
           ll a,b,c,d,e,f,g,h;
           cin>>a>>b>>c>>d;
           e=power_of_two_advanced(a,b);
           f=inverse_modulo(c,d);
           g=((e%d)*(f%d))%d;
           cout<<g<<endl;
       }
}

