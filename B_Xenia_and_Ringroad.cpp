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

    lli n,m,sum,i;
    cin>>n>>m;
    int a[100005];
    for(i=0; i<m; i++)
    {
        cin>>a[i];
    }
    sum=a[0]-1;
    for(i=0; i<m-1; i++)
    {
        if(a[i]>a[i+1])
        {
            sum+=a[i+1]+n-a[i];
        }
        else
            sum+=a[i+1]-a[i];
    }
    cout<<sum<<endl;;



    return 0;
}
