#include <bits/stdc++.h>

using namespace std;

bool ok(int* a, int* b, int mid, int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++)
		cnt += (mid - 1 - a[i] <= cnt && cnt <= b[i]);
	return cnt >= mid;
}

void test_case(int& tc) {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i];
	int low = -1, high = n + 1;
	while (high - low > 1) {
		int mid = (low + high) >> 1;
		if (ok(a, b, mid, n))
			low = mid;
		else
			high = mid;
	}
	cout << low << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
