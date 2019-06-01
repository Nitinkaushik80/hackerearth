#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
string lps(string str, ll n)
{
    ll curr=1;
    ll begin=0;
    ll max_s=0;
    int j,c;
    bool arr[n][n];
    memset(arr,false,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        arr[i][i]=true;
    }
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
            arr[i][i+1]=true;
            begin=i;
            curr=2;
            max_s=curr;
        }
    }
    for( c=3;c<=n;c++)
    {
        for(int i=0;i<n-c+1;i++)
        {
            j=i+(c-1);
            if(str[i]==str[j] && arr[i+1][j-1])
            {
                arr[i][j]=true;
                curr=c;
                if(max_s<curr)
                {
                    begin=i;
                    max_s=curr;
                }
            }
        }
    }



  /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  */
   //cout<<begin<<endl;
   // cout<<max_s<<endl;
    return str.substr(begin,max_s);

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
      ll len=str.length();
      string result=lps(str,len);
      cout<<result.size()<<endl;
      cout<<result<<endl;
    }
}
