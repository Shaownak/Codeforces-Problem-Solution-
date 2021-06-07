#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)

int randomNoGenerator(int limit)
{
    // uniformly-distributed integer random number
    // generator that produces non-deterministic
    // random numbers.
    random_device rd;
  
    // A Mersenne Twister pseudo-random generator
    // of 32-bit numbers with a state size of
    // 19937 bits.
    mt19937 gen(rd());
  
    // Uniform distribution
    uniform_int_distribution<> dis(1, limit);
    return dis(gen);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    // int limit = 9;
    // cout << randomNoGenerator(limit) << endl;
    // return 0;

    int i = 2;

    int mask = (1<<i);

    cout<<mask;

    return 0;
}