#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cin>>t;
       while(t--)
       {
           ll n;
           ll flag=0;
           cin>>n;
           n=n & n-1;
           cout<<n<<endl;
           if(n ==0)
            cout<<"Is power of two "<<endl;
           else
               cout<<"Is not power of two "<<endl;

       }
}
