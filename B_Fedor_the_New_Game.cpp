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

    vi a(10000);
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m + 1; i++)
        cin >> a[i];

    int friends = 0;

    for (int i = 0; i < m; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++)
            if (((a[i] >> j) & 1) != ((a[m] >> j) & 1))
                t++;
        if(t <= k)
            friends++;
    }

    cout << friends << endl;
    

    return 0;
}
