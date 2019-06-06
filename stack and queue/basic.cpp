#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
ll top=-1;
void push(ll * input, ll element,ll n)
{
    if(top==n-1)
        cout<<"Stack is full "<<endl;
    else
    {
        top=top+1;
        input[top]=element;
    }
}
int IsEmpty()
{
    if(top==-1)
        return true;
    return false;
}
void pop()
{
    if(IsEmpty())
        cout<<"Stack is empty"<<endl;
    else
    {
        top=top-1;
    }
}

int size()
{
    return top+1;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
       long long int n,element;
       cin>>n;
       ll input[n];
       push(input,2,n);
       push(input,5,n);
       push(input,6,n);
        push(input,10,n);
        for(int i=0;i<n;i++)
            cout<<input[i]<<" ";
        cout<<endl;
        pop();
        cout<<size()<<endl;
        push(input,10,n);
         for(int i=0;i<n;i++)
            cout<<input[i]<<" ";
        cout<<endl;
        pop();
        cout<<size()<<endl;





}

