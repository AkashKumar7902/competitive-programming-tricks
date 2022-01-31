bool ispal (string s, int i, int j) {
	while (i < j) {
		if (s[i++] != s[j--]) {
			return false;
		}
	}
	return true;
}

// atcoder question link :   
