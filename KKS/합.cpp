#include <iostream>

using namespace std;

int main(void) {
	int n; cin >> n;
	// int result = n * (1 + n) / 2;
	int result = 0;
	for (int i = 1; i < n + 1; i++)
		result += i;
	cout << result << '\n';
	return 0;
}
