#include <iostream>

using namespace std;

int triangle[45];

bool isEureka(int n) {
    for (int i = 1; i < 45; i++) {
        for (int j = 1; j < 45; j++) {
            for (int k = 1; k < 45; k++) {
                if (triangle[i] + triangle[j] + triangle[k] == n) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main(void) {
    for (int i = 0; i < 45; i++)
        triangle[i] = i * (i + 1) / 2;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int k;
        cin >> k;
        cout << isEureka(k) << '\n';
    }
    return 0;
}
