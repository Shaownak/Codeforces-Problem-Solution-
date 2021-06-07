#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define ss set<string>

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    int t; cin>>t; 

    FOR(i,0,t){
        int n; cin>>n;
        string s;
        cin>>s;
        char p = s[0];
        char q = s[n-1];
        int tt=0;
        int m = 0;
        if(p == 'T' && q == 'T'){
            FOR(i,0,n){
                if(s[i]=='T'){
                    tt++;
                }
                else m++;
            }
            if(m*2 == tt){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    

    return 0;
}