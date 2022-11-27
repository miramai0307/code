#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
	int Tc, n, input;
	cin >> Tc;
	while (Tc--)
	{
		cin >> n;
		vector<int> a, b;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			a.push_back(input);
			while (a.size() > 0 && a[a.size() - 1] > a[a.size() - 2])
			{
				a.erase(a.begin() + a.size() - 2);
			}
		}
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			b.push_back(input);
			while (b.size() > 0 && b[b.size() - 1] > b[b.size() - 2])
			{
				b.erase(b.begin() + b.size() - 2);
			}
		}
		bool flag = 0;
		if (b.size() > a.size())
		{
			cout << "NO\n";
			continue;
		}
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] != b[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
	return 0;
}