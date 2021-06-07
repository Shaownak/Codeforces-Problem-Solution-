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
 
    map<string, int>m;
    string s;
 
    for(int i=0;i<n;i++){
        cin>>s;
        if(m.count(s)==0){
            cout<<"OK"<<"\n";
            m[s]=1;
        }
        else{
            cout<<s<<m[s]<<"\n";
            m[s]+=1;
        }
    }


    return 0;
}
