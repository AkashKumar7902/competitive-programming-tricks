#include <iostream>
using namespace std;

void filter(int n, char c[]) { 
  int j = 0; 
  while(n > 0) {
    int last_bit = (n & 1);
    if(last_bit) {
      cout << c[j];
    }
    j++;
    n >>= 1;
  }
  cout << endl;
  return;
}

void printsubsets(char a[]) {
  int n = strlen(a);
  for(int i = 0; i < (1 << n); ++i) {  
    filter(n, a);
  }
  return;
}

int main() {
  char a[100];
  cin >> a;
  printsubsets(a);
}


// for strings

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

void filter(string s, ll n) {
	for (int i = 0; i < (1 << s.size()); i++) {
		if (n & 1) {
			cout << s[i];
		}
		n >>= 1;
	}
	cout << endl;
}

void subsets(string s) {

	for (ll i = 1; i <= (1 << s.size()); ++i) {
		filter(s, i);
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	subsets(s);
}
https://codeforces.com/contest/1626/customtest
