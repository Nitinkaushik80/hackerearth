#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t,f,s,d,g,p,total=0;
       priority_queue<ll>pq;
       vector<ll>v;
   //    priority_queue<ll,vector<ll>,greater<ll>>pqa;
       cin>>t;
       for(int i=0;i<t;i++)
       {
           cin>>p;
           v.push_back(p);
       }
       for(int i=0;i<t;i++)
       {
           if(i<2)
           {
                cout<<"-1"<<endl;

           }
           else
           {
               for(int j=i;j>=0;j--)
               {
                   pq.push(v[j]);
               }

                d=pq.top();
                  pq.pop();
                 f=pq.top();
                  pq.pop();
                  s=pq.top();
                  total=f*s*d;
                  cout<<total<<endl;
                  total=0;
           }
       }

}

