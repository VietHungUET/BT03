#include<bits/stdc++.h>
using namespace std;
char arrayy[15][15];
int main()
{

    int m,n,dem;
    cin>>m>>n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>arrayy[i][j];
        }
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(arrayy[i][j]=='.')
            {
                dem=0;
                for(int k=i-1; k<=i+1; k++)
                {
                    for(int p=j-1; p<=j+1; p++)
                    {
                        if(arrayy[k][p]=='*')
                        {
                            dem++;
                        }
                    }
                }
                arrayy[i][j]=dem+'0';
            }
        }
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<arrayy[i][j]<<" ";
        }
        cout<<endl;
    }
}
