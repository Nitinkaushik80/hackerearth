#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
void subsequence(string str, ll n )
{
    for(int i=1;i<=(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & 1<<j)
             cout<<str[j];
        }
        cout<<endl;
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
         string str;
         cin>>str;
         ll n=str.size();
         subsequence(str,n);
       }
}

