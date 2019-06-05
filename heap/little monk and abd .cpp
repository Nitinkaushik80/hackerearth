#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t,q,p;
       cin>>t;
      priority_queue<ll>pqd;
      priority_queue<ll,vector<ll>,greater<ll>>pqa;
      vector<pair<ll,char>>v,v1;
      for(int i=0;i<t;i++)
      {
          cin>>p;
          pqd.push(p);
          pqa.push(p);
      }
      cin>>q;
      vector<ll>v2(q);
      v2.clear();
      for(int i=0;i<q;i++)
      {
          ll x;
          char y;
          cin>>x>>y;
          v.push_back({x,y});
      }
      ll maxi=0;
      for(auto &x: v)
      {
          if(x.first>maxi)
            maxi=x.first;
      }
    //  cout<<maxi<<endl;
      ll i=1;
     while(i<=maxi)
     {
         ll d=pqa.top();
         ll f =pqd.top();
         pqa.pop();
         pqd.pop();
         for(auto &x : v)
         {
            if(x.first==i)
            {
                if(x.second=='L')
                    v2.push_back(f);
                if(x.second=='S')
                   v2.push_back(d);
            }
         }
         i++;
     }
     reverse(v2.begin(),v2.end());
    for(auto &e : v2)
        cout<<e<<endl;

}

