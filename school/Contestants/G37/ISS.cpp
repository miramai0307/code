#include <iostream>
#include <vector>
#include <algorithm>

uint64_t calc_msis(const std::vector<uint64_t> &_v1, const std::vector<uint64_t> &_v2)
{
    uint64_t max{};
    size_t n = _v1.size();
    auto msis = new uint64_t[n];
    for (size_t i = 0; i < n; i++)
    {
        msis[i] = _v2[i];
    }
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            if (_v1[i] > _v1[j] && msis[i] < msis[j] + _v2[i])
            {
                msis[i] = msis[j] + _v2[i];
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        if (max < msis[i])
        {
            max = msis[i];
        }
    }
    delete[] msis;
    return max;
}

int main(void)
{
    size_t n;
    std::cin >> n;
    std::vector<uint64_t> v1(n), v2(n);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> v1[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> v2[i];
    }
    std::cout << calc_msis(v1, v2) << '\n';
    return 0;
} 