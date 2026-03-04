#include <bits/stdc++.h>
using namespace std;

string nextLexicographical(string s) {
	int n = (int)s.size();
	int i = n - 2;
	while (i >= 0 && s[i] >= s[i+1]) --i;
	if (i < 0) return "no answer";
	int j = n - 1;
	while (j > i && s[j] <= s[i]) --j;
	swap(s[i], s[j]);
	reverse(s.begin() + i + 1, s.end());
	return s;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	if (!(cin >> s)) return 0;
	cout << nextLexicographical(s) << '\n';
	return 0;
}

