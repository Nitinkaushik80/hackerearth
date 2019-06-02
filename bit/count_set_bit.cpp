#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
void count(ll n)
{
    ll counter=0;
    while(n)
    {
        n=n & n-1;
        counter++;
    }
    cout<<"the no. of 1's in bits are ";
    cout<<counter<<endl;
    cout<<1/2<<endl;
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
           count(n);
       }
}

