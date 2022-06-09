#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b;
    c=a+b;
    if(c%2==0)
        cout<<a<<" "<<(a+b)/2<<" "<<b<<endl;
    else
        cout<<-1<<endl;
}
