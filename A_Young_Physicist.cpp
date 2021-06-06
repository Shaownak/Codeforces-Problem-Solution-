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

    int n; cin>>n;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    while(n--){
        vi v(3);
        FOR(i,0,3){
            cin>>v[i];
            sum1+=v[0];
            sum2+=v[1];
            sum3+=v[2];
        }
    }
    if(sum1==0 && sum2==0 && sum3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
