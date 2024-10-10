#include <bits/stdc++.h>
using namespace std;

/*
  John Watson
  Handle codeforces : quangminh98

  Mua Code nhu mua Florentino !!
*/

#define ll long long

const string name = "test";

void solve();
signed main()
{
	if (fopen((name + ".inp").c_str(), "r"))
	{
		freopen((name + ".inp").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) solve();

	return 0;
}

// main program

void solve()
{
	int n; cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		pq.push(x);
	}
	
	while (pq.size() != 1)
	{
		int a = pq.top(); pq.pop();
		int b = pq.top(); pq.pop();
		pq.push((a + b) / 2);
	}
	
	cout << pq.top() << '\n';
}
