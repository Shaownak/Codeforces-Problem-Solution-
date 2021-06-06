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
    cin>>s;

    FOR(i,0,s.size()){
        if(s[i]=='.') cout<<0;
        else if(s[i]=='-'&&s[i+1]=='-'){
            cout<<2;
            i+=1;
        }
        else if(s[i]=='-'&&s[i+1]=='.'){
            cout<<1;
            i+=1;
        }
    }



    return 0;
}
