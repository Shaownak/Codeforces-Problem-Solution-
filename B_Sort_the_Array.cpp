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

    lli i,j,k;
    lli n,count=0;
    lli seg=0;
    lli l,r;

    cin>>n;
    lli a[n],s[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s[i]=a[i];
    }

    sort(s,s+n);
    for(i=0;i<n;i++)
    {
        if(s[i]==a[i])
            count++;
    }

    if(count==n)
    {
        cout<<"yes\n1 1";
        return 0;
    }

    for(i=0;i<n-1,seg<1;)
    {
        if(a[i]<a[i+1])
        {
            i++;
        }

        else
        {
            l=i;
            r=i;
            while(a[i]>a[i+1] && i<n-1)
            {
                i++;
                r++;
            }

            sort(a+l,a+r+1);
            seg++;
        }
    }

    for(i=0;i<n;i++)
    {
        if(s[i]!=a[i])
        {
            cout<<"no";
            return 0;
        }
    }

    cout<<"yes\n"<<l+1<<" "<<r+1;



    return 0;
}
