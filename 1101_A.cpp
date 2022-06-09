#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int l,r,d,m;
        cin>>l>>r>>d;
        if(d<l || d>r)
            cout<<d<<endl;
        else
        {
            m=((r/d)+1)*d;
            cout<<m<<endl;

        }
    }
}
