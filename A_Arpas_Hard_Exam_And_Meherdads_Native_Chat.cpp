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

    lli n; cin>>n;

    if(n==0){
        cout<<"1"<<endl;
    }
    else if(n%4==0) cout<<"6"<<endl;
    else if(n%4==1) cout<<"8"<<endl;
    else if(n%4==2) cout<<"4"<<endl;
    else if(n%4==3) cout<<"2"<<endl;


    return 0;
}
