#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    int n,q;
    cin>>n>>q;

    deque<int>a(n+1);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    vector<int>t(n);
    FOR(i,0,q){
        cin>>t[i];
    }

    vector<int>out;


    for(int i=0; i<q; i++){
        for(int j=1; j<=n; j++){
            if(a[j]==t[i]){
                out.push_back(j);
                int l = a[j];
                a.erase(a.begin()+(j));
                a.push_front(l);
            }
        }
    }

    // for(int i=0; i<q; i++){
    //     auto k = lower_bound(a.begin(),a.begin()+(n), t[i])-a.begin();
    //     if (k < n && a[k] == t[i]) {
    //     // x found at index k
    //         int index = k;
    //         out.push_back(index);
    //         a.push_front(a[index]);
    //         a.erase(a.begin()+index);
    //     }
    // }

    for(int i:out){
        cout<<i<<" ";
    }


    return 0;
}