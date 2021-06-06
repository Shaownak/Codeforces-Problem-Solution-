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

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        vector<char> q;
        char c;
        for(int i=0; i<n; i++){
            if(s[i]!=s[i+1]){
                q.push_back(s[i]);
            }
        }
        sort(q.begin(),q.end());
        bool res=true;
        for(int i=0; i<q.size(); i++){
            if(q[i]==q[i+1]){
                cout<<"NO"<<endl;
                break;
            }
            else res = false;
        }
        if(res==false) cout<<"YES"<<endl;
    }



    return 0;
}