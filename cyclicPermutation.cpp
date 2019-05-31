#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
string permut(string str)
{
   // cout<<"str "<<str<<endl;
        char c=str[0];
        for(int j=1;j<str.length();j++)
        {
            str[j-1]=str[j];
        }
        str[str.length()-1]=c;
    return str;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long int t;
   cin>>t;
   while(t--)
   {
       ll counter=0;
       string str1;
       string str2;
       cin>>str1>>str2;
       string res;
       res=str2;
       if(str1==str2)
        counter++;
       for(int i=0;i<str2.length()-1;i++)
    {
       res=permut(res);
        if(res==str1)
         {
         //    cout<<"hell"<<endl;
            counter++;
         }
 //      cout<<res<<endl;
    }
    cout<<counter<<endl;

    }
}
