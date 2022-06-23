#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	string s;
	cin >> n >> s;

	auto ct = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		if ('a' == s[i] ||
			'i' == s[i] ||
			'u' == s[i] ||
			'e' == s[i] ||
			'o' == s[i]) {
			++ct;
		}
	}

	cout << ct;

	return 0;
}