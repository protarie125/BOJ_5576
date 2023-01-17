#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto v1 = vi(10);
	for (auto i = 0; i < 10; ++i) {
		cin >> v1[i];
	}

	auto v2 = vi(10);
	for (auto i = 0; i < 10; ++i) {
		cin >> v2[i];
	}

	sort(v1.begin(), v1.end(), greater());
	sort(v2.begin(), v2.end(), greater());

	cout << v1[0] + v1[1] + v1[2] << ' '
		<< v2[0] + v2[1] + v2[2];

	return 0;
}