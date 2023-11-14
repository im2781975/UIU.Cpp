#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*n; j++)
        {
            if(j<=n-2-i || j>=2*n -i)
            cout<<"#";
            
            else
            cout<<"*";
        }
        cout<<"\n";
    }
}
