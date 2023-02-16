#include <bits/stdc++.h>
using namespace std;
using namespace placeholders;
#define mem1(a) 		memset(a, 1, sizeof(a))
#define mem0(a)			memset(a, 0, sizeof(a))
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define fr first
#define sc second
#define ll long long
#define prinst(st)		for(auto &i : st) cout << i << " "; cout << endl;
#define printvec(vec) for(auto elem : vec) cout << elem << " "; cout << endl;
#define printstack(st) while(!st.empty()) cout << st.top() << " ", st.pop(), cout <<endl;

vector<int> p(100005);

void precompute() {
	for (int i = 1; i < p.size(); ++i) {
		p[i] = i;
	}
	for (int i = 2; i < p.size(); ++i) {
		if (p[i] == i) {
			for (int j = i * i; j < p.size(); j += i) {
				if (p[j] == j) {
					p[j] = i;
				}
			}
		}
	}
}

void solve() {
	for (int i = 0; i < p.size(); ++i) {
		cout << p[i] << " ";
	}
	cout << endl;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	precompute();
	while (t--)
	{
		solve();
	}
}
