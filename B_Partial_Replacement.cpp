#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    int t; cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;
        // vector<char>c;
        // for(int i=0; i<n; i++){
        //    char el; 
        //    cin>>el;
        //    c.push_back(el);
        // }

        string s;

        cin>>s;

        int first = s.find_first_of('*');
        int last = s.find_last_of('*');
        int c = 0;
        int counter = 0;
        for(int i=first; i<last; i++){
            for(int j=i; j<=i+k; j++){
                if(s[j]=='*'){
                    c = j;
                }
            }
            counter++;
            i = c-1;
        }
        counter++;
        cout<<counter<<endl;
    }

    return 0;
}