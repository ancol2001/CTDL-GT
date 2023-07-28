#include <bits/stdc++.h>
using namespace std;

int n, K;
vector<int> a, b;
stack<string> str;
string s;
// vector<int, int> str;
int check = 0;
int tong()
{
	int sumx = 0;
	for (int i = 1; i <= n; i++)
	{
		sumx = sumx + a[i] * b[i];
	}
	return sumx;
}
void print()
{
	s = "[";
	for (int i = 1; i <= n; i++)
	{
		if (b[i] == 1)
		{
			s += to_string(a[i]);
			s += " ";
		}
	}
	s.pop_back();
	s += "]";
	str.push(s);
}
void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		b[i] = j;
		if (i == n)
		{
			if (tong() == K)
			{
				print();
				check++;
			}
		}
		else
			Try(i + 1);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> K;
		a.resize(n + 1);
		b.resize(n + 1);
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 1; i <= n; i++)
		{
			b[i] = 0;
		}
		check = 0;
		Try(1);
		if (check != 0)
		{
			while (!str.empty())
			{
				cout << str.top() << " ";
				str.pop();
			}
		}else cout << "-1";
		cout << "\n";
	}
	return 0;
}