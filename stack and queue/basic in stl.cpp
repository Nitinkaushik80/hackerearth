#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       stack<ll>s;
       s.push(4);
       s.push(5);
       s.push(7);
       s.push(9);
       s.pop();
      cout<<" size  "<< s.size()<<endl;
      cout<<"The stack Element are :"<<endl;
      while(!s.empty())
      {
            cout<<s.top()<<endl;
            s.pop();
      }
}
