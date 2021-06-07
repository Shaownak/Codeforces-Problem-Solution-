#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define ss set<string>
#define mii map<int,int>


set<lli>factorize(lli n){
    set<lli>v;
    for(lli i=1; i*i<=n; i++){
        if(n%i==0){
            v.insert(i);
            v.insert(n/i);
        }
    }
    // if(n>1){
    //     v.push_back(n);
    // }
    return v;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    lli n; cin>>n;

    auto v = factorize(n);
    for(auto p:v){
        cout<<p<<endl;
    }



    return 0;
}