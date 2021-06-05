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
    bool x = true;

    FOR(i,0,s.size()){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            if(!x){
                cout<<" ";
            }
        }
        else{
            cout<<s[i];
            x = false;
        }
    }



    return 0;
}
