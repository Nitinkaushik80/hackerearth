#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
vector<ll>v;
void z_algo(string text)
{
    v.clear();
  //  cout<<text<<endl;
    v.push_back(0);
    for(int i=1;i<text.length();i++)
    {
        if(text[0]!=text[i])
        {
            v.push_back(0);
        }
        else
        {
            ll left=0;
            ll right=i;
            ll result=0;
            while(right<text.length())
            {
                if(text[left]!=text[right])
                {
                        break;
                }
                left++;
                right++;
            }
              result=abs(i-right);
                v.push_back(result);
        }
    }
}
void substringCount(string p)
{
    ll counter;
    counter=0;
    ll len=p.length();
    for(auto &x: v)
    {
        if(x==len)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long int t;
   cin>>t;
   while(t--)
   {
       string pattern,text;
        cin>>pattern;
        cin>>text;
        string text1=text.substr(0,text.length()-1);
        text+=text1;
        string te = pattern + '$' + text;
      //  cout<<te<<endl;
        z_algo(te);
        substringCount(pattern);
    }
}
