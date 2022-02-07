bool ispal (string s, int i, int j) {
	while (i < j) {
		if (s[i++] != s[j--]) {
			return false;
		}
	}
	return true;
}


// another approach :

bool palindrome(string s) {
	auto p = s;
	reverse(p.begin(), p.end());
	if (p == s)
		return true;
	else
		return false;
}

