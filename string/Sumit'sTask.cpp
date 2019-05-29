#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       ll i,j,counter1=0, counter2=0,sum1=0,sum2=0,result=0;
       string str;
       cin>>str;
       ll len=str.length();
       vector<char>v,v1;
       for(int i=0;i<str.size();i++)
       {
           v.push_back(str[i]);
            v1.push_back(str[i]);
       }
       sort(v.begin(),v.end());
       sort(v1.begin(),v1.end());
       reverse(v1.begin(),v1.end());
  /*     for(auto &x: v)
        cout<<x<<"";
        cout<<endl;
       for(auto &x: v1)
        cout<<x<<""; */
        j=0;
        for( i=0;i<str.length();i++)
        {
            if(str[i]=='Z' && v1[j]=='Z')
            {
         //       cout<<"i "<<i<<" "<<"j "<<j<<endl;
                sum1+=abs(i-j);
                j++;
            }
        }
     //   cout<<sum1<<endl;
        j=len-1;
        for( i=len-1;i>=0;i--)
        {
            if(str[i]=='Z' && v[j]=='Z')
            {
           //     cout<<"i "<<i<<" "<<"j "<<j<<endl;
                sum2+=abs(i-j);
                j--;
            }
        }
      //  cout<<sum2<<endl;
        result=min(sum1,sum2);
        cout<<result<<endl;
    }
}
