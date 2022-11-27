#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <vector>

using namespace std;

struct Num
{
    long long int value;
    long long int weight;
};

bool operator<(const Num& a, const Num& b)
{
    return a.value < b.value;
}

int n;
vector<Num> v;

long long int maxWeight(vector<Num>& a)
{
    long long int mx = LLONG_MIN;

    vector<long long int> dp(n);
    for (int i = 0; i < n; i++)
    {
        dp[i] = a[i].weight;
        for (int j = 0; j < i; j++)
            if (a[j].value < a[i].value && dp[j] + a[i].weight > dp[i])
                dp[i] = dp[j] + a[i].weight;
        if (dp[i] > mx) mx = dp[i];
    }

    return mx;
}

int main()
{
    cin >> n;
    for (long long int val, i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back({val, 0});
    }
    for (long long int i = 0; i < n; i++)
        cin >> v[i].weight;

    cout << maxWeight(v);
}