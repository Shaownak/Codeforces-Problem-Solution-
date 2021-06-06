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
        vi v(n);
        FOR(i,0,n){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        if(v[0]<0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<v[v.size()-1]+1<<endl;
            for(int i=0; i<=v[v.size()-1]; i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }



    return 0;
}
