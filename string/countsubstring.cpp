#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       string t;
       string p;
       ll counter=0;
        ll ans=0;
       cin>>p>>t;
       ll len=p.length();
       for(int i=0;i<t.length()-len+1;i++)
       {
           counter=0;
           for(int j=0;j<len;j++)
           {
              if(t[i+j]!=p[j])
              {
                  break;
              }
             counter++;
             if(counter==len)
                ans++;
           }
       }
       cout<<ans<<endl;

}
