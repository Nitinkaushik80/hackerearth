#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t,n,p,total=0;
       priority_queue<ll>pq;
       cin>>t>>n;
       for(int i=0;i<t;i++)
       {
           cin>>p;
           pq.push(p);
       }
       for(int i=0;i<n;i++)
       {
           ll d=pq.top();
           pq.pop();
           total+=d;
           d--;
           if(d!=0)
            pq.push(d);
       }
       cout<<total<<endl;


}

