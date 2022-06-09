#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long int n,m;
   cin>>n;
   m=n%10;
   if(m>8 )
    cout<<m-8<<endl;
   else if(m<8 && m>0)
    cout<<8-m<<endl;
   else if(m<0)

   else
    cout<<n-8<<endl;

}
