#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin>>n;
    vector<long long int>v;
    while(n--)
    {
        int a,b,c,d,sum=0;

        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        v.push_back(sum);
        //cout<<sum<<endl;
    }
    for(int i=1;i<v.size();i++)
    {
        //cout<<v[i]<<endl;
        if(v[0]<v[i])
            c++;
    }
        cout<<c<<endl;
        //else
           // break;


}
