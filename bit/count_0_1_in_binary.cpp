#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           ll n;
           ll count0=0;
           ll count1=0;
           cin>>n;
           while(n)
           {
               if(n%2==0)
                count0++;
               else
                count1++;
               n/=2;
           }
           cout<<"no of 0 ";
           cout<<count0<<endl;
            cout<<"no of 1 ";
           cout<<count1<<endl;

       }
}

