#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define ss set<string>
#define mii map<int,int>

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    string s;
    int n;
    int ans=0;
    cin>>s;
    cin>>n;
    int value[26];
    for(int i=0;i<26;++i)
        cin>>value[i];
    for(int i=0;i<s.size();++i)
        ans+=(value[s[i]-'a']*(i+1));
    sort(value,value+26);
    int mx=value[25];
    for(int i=0;i<n;++i)
         ans+=(mx*(s.size()+i+1));
    cout<<ans<<endl;

    return 0;
}
