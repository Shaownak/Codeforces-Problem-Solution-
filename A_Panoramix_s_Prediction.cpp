#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define ss set<string>
#define mii map<int,int>

bool is_prime(int x){
    if(x==1) return false;
    else{
        for(int i=2; i*i<=x; i++){
            if(x%i==0) return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    int n,m;
    cin>>n>>m;
    bool res = true;

    for(int i=n+1; i<m; i++){
        if(is_prime(i)) res = false;
    }

    if(res && is_prime(m) && is_prime(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
