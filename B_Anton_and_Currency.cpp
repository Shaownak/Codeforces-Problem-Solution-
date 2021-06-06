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
    cin >> s;
    int n(s.length() - 1), ind(n);

    for (int i = 0; i < n; i++)
        if ((s[i] - '0') % 2 == 0)
        {
            ind = i;
            if (s[n] > s[i])
                break;
        }

    if (n == ind)
        cout << -1 << endl;
    else
    {
        swap(s[ind], s[n]);
        cout << s << endl;
    }



    return 0;
}
