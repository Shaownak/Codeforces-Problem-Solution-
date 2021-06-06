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

    int n,m;
    cin>>n>>m;
    map <string,string> t;
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        t[a]=b;
    }
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        string y;
        y=t[x];
        if(y.size()<x.size())
            cout<<y<<" ";
        else
            cout<<x<<" ";
    }



    return 0;
}
