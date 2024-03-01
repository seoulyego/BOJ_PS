#include <sstream>
#include <iostream>

using namespace std;

int numbers[1000000];

void setEratos(int m, int n) {
    numbers[0] = numbers[1] = 1;
    for (int i = 2; i * i <= n; i++) {
        if (numbers[i] == 1) continue ;
        for (int k = i * i; k <= n; k += i) {
            numbers[k] = 1;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    stringstream ss;
    ss << cin.rdbuf();
    int m, n;
    ss >> m && ss >> n;

    if (m == n && m != 1) {
        cout << m << "\n";
        return 0;
    }

    setEratos(m, n);

    stringstream result;
    for (int k = m; k <= n; k++) {
        if (numbers[k] == 1) continue ;
        result << k << '\n';
    }
    cout << result.str();
    return 0;
}
