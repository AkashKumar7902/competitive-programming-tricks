n&(n-1)
//the above removes the last set bit from n.
// eg. binary : 101000 after the above operation will become 100000 in binary ( the operation removed last set bit)

  // proof
 #include <bits/stdc++.h>
using namespace std;
using namespace placeholders;
#define ll long long

int decimaltobinary(int n) {
	int pow = 1;
	int ans = 0;
	while (n > 0) {
		int bit = (n & 1);
		ans += pow * bit;
		pow *= 10;
		n >>= 1;
	}
	cout << ans << endl;
}

void solve() {
	int n; cin >> n;
	decimaltobinary(n);
	n = n & (n - 1);
	decimaltobinary(n);
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();
}
