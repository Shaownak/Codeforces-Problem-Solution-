#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define ss set<string>
#define mii map<int,int>


int c,n;
void hexa(int x){
    if(x<=n){
        c++;
    }
    else
        return;
    hexa(10*x+0);
    hexa(10*x+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    cin>>n;
    c=0;
    hexa(1);
    cout<<c<<endl;

    return 0;
}
