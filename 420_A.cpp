#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ax;
    cin>>ax;
    string s="AHIMOTUVWXY";
    int l=ax.size();
    for(int i=0;i<l;i++)
        if(s.find(ax[i])==-1)
    {cout<<"NO"<<endl;
    return 0;
    }
    string bx=ax;
    reverse(bx.begin(),bx.end());
    if(ax==bx )
        {cout<<"YES"<<endl;
       // return 0;
        }
    else
        {cout<<"NO"<<endl;
        //return 0;
        }
}
