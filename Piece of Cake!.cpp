#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
	fastio;
	int a, b, c;
	cin >> a >> b >> c;
	cout << 4 * max(a - c, c) * max(a - b, b);
	return 0;
}