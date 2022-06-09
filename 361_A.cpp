#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ax[n][n];
   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
       if(i==j)
        ax[i][j]=k;
       else
        ax[i][j]=0;

    for(int i=0;i<n;i++)
        {for(int j=0;j<n;j++)
          cout<<ax[i][j]<<" ";
          cout<<endl;}



}
