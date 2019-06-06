#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
bool check(vector<char>v)
{
    cout<<"hello"<<endl;
    char x;
    stack<char>s;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]=='(' || v[i]=='{' || v[i]=='[' )
            {
                s.push(v[i]);
                continue;
            }
        if(s.empty())
            return false;

        switch(v[i])
        {
        case  ')' :
            x=s.top();
            s.pop();
            if(x=='[' || x=='{')
                return false;
            break;

         case  '}' :
            x=s.top();
            s.pop();
            if(x=='(' || x=='[')
                return false;
            break;

             case  ']' :
            x=s.top();
            s.pop();
            if(x=='{' || x=='(')
                return false;
            break;


        }
    }
   return true;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int t;
       cout<<"Enter the Total element "<<endl;
       cin>>t;
      vector<char>v(t);
      v.clear();
      for(int i=0;i<t;i++)
      {
          char x;
          cin>>x;
          v.push_back(x);
      }
      if(check(v))
        cout<<"Paranthesis Balanced"<<endl;
      else
         cout<<"Paranthesis Not Balanced"<<endl;

}

