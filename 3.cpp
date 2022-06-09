#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=0,s=0;
    cin>>t;
    while(t--)
    {
        j++;
        int n;
        cin>>n;
        int ax[n];
        for(int i=0;i<n;i++)
            cin>>ax[i];
        sort(ax,ax+n);

            cout<<"Case"<<" "<<j<<":"<<" "<<ax[n-1]-ax[0]<<endl;


    }
}
