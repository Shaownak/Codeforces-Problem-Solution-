#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define ss set<string>
#define mii map<int,int>

lli pairs(lli n)
{
    return n * (n - 1) / 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    lli n, m;
    cin >> n >> m;
    lli a(n / m), b(n % m);
    lli min = pairs(a) * (m - b) + pairs(a + 1) * b;
    lli max = pairs(n - m + 1);
    cout << min << " " << max << endl;
    
    
    return 0;
}
