#include <iostream>

using namespace std;

int main(void) {
    int N, X;
    cin >> N >> X;
    for (int i = 0; i < N; i++) {
        int input; cin >> input;
        if (input < X)
            cout << input << ' ';
    }
    return 0;
}
