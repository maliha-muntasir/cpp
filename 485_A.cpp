#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,m,n,z;
    cin>>a>>m;
    for(int i=0;i<100;i++)
        a=a+(a%m);
    if(a%m==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
