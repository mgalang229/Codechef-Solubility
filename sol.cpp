#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, a, b;
		cin >> x >> a >> b;
		// view the image in this repository for derivation of formula
		cout << (a + (100 - x) * b) * 10 << '\n';
	}
	return 0;
}
