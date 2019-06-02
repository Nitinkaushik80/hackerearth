/*
        input
        1
        23
        2
        output
        1
                           */
#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
bool setBit(ll n, ll i)
{
    if(n & 1<<i)
        return true;
    else
        return false;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           ll n,i;
           cin>>n>>i;
           bool result;
           result=setBit(n,i);
           cout<<result<<endl;
       }
}

