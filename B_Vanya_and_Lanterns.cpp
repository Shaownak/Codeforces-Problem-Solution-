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

    int n, l, r;
    cin >> n >> l;
    vi p(n);

    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p.begin(), p.end());
    r = max(p[0], l - p[n - 1]) * 2;

    for (int i = 0; i < n - 1; i++)
        r = max(r, p[i + 1] - p[i]);

    cout.precision(20);
    cout << fixed << r / 2.0 << endl;
    return 0;



    return 0;
}
