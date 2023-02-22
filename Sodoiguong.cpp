#include<bits/stdc++.h>
using namespace std;
bool kt(int n)
{
    int somoi=0,sobandau=n;
    while(n>0)
    {
        int m=n%10;
        somoi=somoi*10+m;
        n=n/10;
    }
    if(somoi==sobandau)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a,b,test,dem;
    cin>>test;
    while(test--)
    {
        dem=0;
        cin>>a>>b;
        for(int i=a; i<=b; i++)
        {
            if(kt(i))
            {
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}
