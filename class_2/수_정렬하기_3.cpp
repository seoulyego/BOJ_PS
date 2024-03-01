#include <map>
#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	map<int, int> _map;
	for (int i = 0; i < N; i++) {
		int input; cin >> input;
		auto pair = make_pair(i, input);
		_map.insert(pair);
	}
	for (auto it = _map.begin(); it != _map.end(); it++) {
		cout << it->second() << '\n';
	}
	return 0;
}
