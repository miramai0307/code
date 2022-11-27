#include <iostream>
#include <vector>
#include <algorithm>

bool check_sortable(std::vector<uint64_t> a, std::vector<uint64_t> b)
{
    size_t size = a.size(), start_pos{}, end_pos{};
    for (size_t i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            if (i == 0)
            {
                return false;
            }
            start_pos = i;
            break;
        }
    }
    for (size_t i = size - 1; i > 0; i--)
    {
        if (a[i] != b[i])
        {
            if (i == size - 1)
            {
                return false;
            }
            end_pos = i;
            break;
        }
    }
    std::sort(a.begin() + start_pos, a.begin() + end_pos + 1);
    std::sort(b.begin() + start_pos, b.begin() + end_pos + 1);
    if (a != b)
    {
        return false;
    }
    return true;
}

int main(void)
{
    uint64_t test;
    std::cin >> test;
    while (test--)
    {
        size_t n;
        std::cin >> n;
        std::vector<uint64_t> vec_a(n), vec_b(n);
        for (size_t i = 0; i < n; i++)
        {
            std::cin >> vec_a[i];
        }
        for (size_t i = 0; i < n; i++)
        {
            std::cin >> vec_b[i];
        }
        std::cout << (check_sortable(vec_a, vec_b) ? "YES\n" : "NO\n");
    }
    return 0;
}