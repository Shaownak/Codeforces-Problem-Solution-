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

    int n, f, total=0, answer=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> f;
        total += f;
    }
    for (int i = 1; i <= 5; ++i)
    {
        if ((total + i) % (n + 1) != 1)
        {
            answer += 1;
        }
    }
    cout << answer << endl;
    return 0;



    return 0;
}
