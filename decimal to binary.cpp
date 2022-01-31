int decimaltobinary(int n) {
	int pow = 1;
	int ans = 0;
	while ( n > 0 ) {
		int bit = (n & 1);
		ans += pow * bit;
		pow *= 10;
		n = n >> 1;
	}
	return ans;
}
