#include <iostream>
#include <cmath>
#include <map>

inline std::map<uint64_t, uint64_t> prime_fact(uint64_t m)
{
    std::map<uint64_t, uint64_t> map_prime_fac;
    if (map_prime_fac.find(2) == map_prime_fac.end())
    {
        if (m % 2 == 0)
        {
            map_prime_fac.insert({2, 0});
        }
    }
    while (m % 2 == 0)
    {
        map_prime_fac[2]++;
        m /= 2;
    }
    for (uint64_t i = 3; i <= sqrtl(m); i = i + 2)
    {
        if (map_prime_fac.find(i) == map_prime_fac.end())
        {
            if (m % i == 0)
            {
                map_prime_fac.insert({i, 0});
            }
        }
        while (m % i == 0)
        {
            map_prime_fac[i]++;
            m /= i;
        }
    }
    if (m > 2)
    {
        map_prime_fac.insert({m, 1});
    }
    return map_prime_fac;
}

int main(void)
{
    uint64_t a, b;
    std::cin >> a >> b;
    std::map<uint64_t, uint64_t> map_prime_fact_m;
    // prime fact m instead of actually calculating m (m can easily overflow uint64_t and BigNum is not available rn)
    for (uint64_t i = a; i <= b; i++)
    {
        auto s = prime_fact(i);
        for (auto &j : s)
        {
            if (map_prime_fact_m.find(j.first) == map_prime_fact_m.end())
            {
                map_prime_fact_m.insert({j.first, j.second});
            }
            else
            {
                map_prime_fact_m[j.first] += j.second;
            }
        }
    }
    uint64_t res{1};
    for (auto &s : map_prime_fact_m)
    {
        res *= (2 * s.second + 1);
    }
    std::cout << res << '\n';
    return 0;
}