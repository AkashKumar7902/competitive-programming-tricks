/*
used to calculate nCk (where n >= k)
n!/(n - k)!(k)!
since, n! = n*(n-1)*(n-2).......(n - k + 1)*(n - k)!
therfore, 
n!/(n-k)!(k)! = n*(n-1)*(n-2).....(n-k+1) / (k)!

Applications :
-> used in stars and bars problems (Marbles -Spoj https://www.spoj.com/problems/MARBLES/)

learn more on 
https://cp-algorithms.com/combinatorics/stars_and_bars.html

*/

ll c(ll n, ll k) {
	ll ans = 1;
	if (k > n - k) {
		k = n - k;
	}
	for (ll i = 1; i <= k; ++i) {
		ans *= (n - i + 1), ans /= i;
	}
	return ans;
}
