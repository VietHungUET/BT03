#include<bits/stdc++.h>
using namespace std;
int a[10002];
int main()
{
    int n;
    int check=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
     }
sort(a+1,a+1+n);
for(int i=1;i<=n;i++)
{
   int t=a[i];
   if(t==a[i+1]) {check=1;break;}
}
if(check==1)cout<<"YES";
else cout<<"N0";
}
