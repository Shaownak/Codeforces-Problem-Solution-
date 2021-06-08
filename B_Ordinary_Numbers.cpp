#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define ss set<string>
#define mii map<int,int>

void solve(){
    lli n;
    cin>>n;
    lli total = 0;
    for(int i=1; i<=9; i++){
        lli x = 0;
        for(int j=1; j<=10; j++){
            x = x*10+i;
            if(x<=n){
                total++;
            }
        }
    }
    cout<<total<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    int test; cin>>test;

    while(test-- > 0){
        solve();
    }



    return 0;
}
