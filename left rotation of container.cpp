void leftRotate(vector<ll> &v, int sz, int times) {
	for (int i = 0; i < times; ++i) {
		rotate(v.begin(), v.begin() + 1, v.begin() + sz);
	}
}

// read about rotate function provided by stl from https://www.cplusplus.com/reference/algorithm/rotate/
