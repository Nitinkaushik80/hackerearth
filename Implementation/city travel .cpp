#include<bits/stdc++.h>
using namespace std;

#define  ll long long int
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define mem(tabl,i) memset(tabl, i, sizeof(tabl))
#define sp(x,y) fixed<<setprecision(y)<<lf(x)
#define debug(c) cout << #c << " = " << c << endl;
#define  f(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007

const int N = 1e5 + 5;

int compare(pair<ll,ll>p1, pair<ll,ll>p2)
{
    return p1.first<p2.first;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

           vector<pair<ll,ll>>v,s;
           ll n,b,c,x,y,j,z,k;
           ll counter=0,counter1=0,counter2=0;
           ll result=0,ans=0, flag=0;
           cin>>n>>b>>c;
           f(i,0,c)
           {
               cin>>x>>y;
                v.pb({x,y});
               //   cout<<dp[1]<<endl;
           }
           sort(v.begin(),v.end(),compare);
           j=0;
           k=0;
           while(1)
           {
               if(j==v[k].first-1)
               {
                   ans+=v[k].second;

                   j++;
                   k++;
               }
               else
               {
                   ans+=b;

                   j++;
               }
               if(ans>=n)
               {
                   z=j;
                   break;
               }
           }
           cout<<z<<endl;




}

