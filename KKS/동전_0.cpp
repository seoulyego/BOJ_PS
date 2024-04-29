#include <iostream>

using namespace std;

int coins[10];

int main(void) {
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> coins[i];
    int result = 0;
    for (int i = N - 1; i >= 0; i--) {
        int div = K / coins[i];
        result += div;
        K %= coins[i];
    }
    cout << result << "\n";
}
