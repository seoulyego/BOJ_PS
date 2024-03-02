#include <iostream>

using namespace std;

int number[10001];
int N;
int input; 

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		number[input]++;
	}
	for (int i = 1; i < 10001; i++) {
		while (number[i]) {
			cout << i << '\n';
			number[i]--;
		}
	}
	return 0;
}
