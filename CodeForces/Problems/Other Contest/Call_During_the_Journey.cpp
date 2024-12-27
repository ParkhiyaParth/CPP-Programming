#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
 
#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define tc int tc;cin >> tc; while(tc--) 
 
const int N = 1e5 + 5;
int n, m, k, t0, t1, t2, h[N];
priority_queue <pii, vector<pii>, greater<pii>> q;
vector <pair<int, pii>> a[N];

bool bfs(int x) {
	while (!q.empty())
		q.pop();
	q.push({x, 1});
	fill(h, h + n + 1, t0 + 1);
	h[1] = x; 
	while (!q.empty()) {
		auto [t, v] = q.top();
		//if (x == 0)
		//	cout << v << ' ' << t << '\n';
		q.pop();
		if (v == n) 
			return 1;
		if (h[v] < t)
			continue;
		for (auto [u, w]: a[v]) {
			int ww = t + w.f;
			if (ww <= t1 || t >= t2) {
				if (ww < h[u])
					q.push({h[u] = ww, u});
			}
			else if (t < t2)
				if (t2 + w.f < h[u])
					q.push({h[u] = t2 + w.f, u});
					
			if (t + w.s < h[u])
				q.push({h[u] = t + w.s, u});
		}
	}
	return 0;
}

int main() {
	ios:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
tc {	
	cin >> n >> m >> t0 >> t1 >> t2;
	for (int i = 1; i <= n; i++)
		a[i].clear();
	for (int i = 0; i < m; i++) {
		int v, u, w, ww;
		cin >> v >> u >> w >> ww;
		a[v].push_back({u, {w, ww}});
		a[u].push_back({v, {w, ww}});
	}
	ll l = 0, r = t0 + 1;
	while (r - l > 1) {
		int mi = (r + l) / 2;
		if (bfs(mi))
			l = mi;
		else
			r = mi;
		//cout << mi << ' ';
	}
	if (bfs(l))
		cout << l << '\n';
	else
		cout << -1 << '\n';
}}