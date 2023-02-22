#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 string r="";
 for(int i=s.size()-1;i>=0;i--)
 {
 r+=s[i];

 }
if(s==r) cout<<"YES";
else cout<<"NO";

}
