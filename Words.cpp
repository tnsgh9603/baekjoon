#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    fastio;
    string s;
    while (getline(cin, s) && s != "#") {
        stringstream in(s);
        while (in >> s) {
            reverse(s.begin(), s.end());
            cout << s << ' ';
        }
        cout << '\n';
    }
    return 0;
}