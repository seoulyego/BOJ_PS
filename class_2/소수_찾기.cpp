#include <sstream>
#include <iostream>

using namespace std;

int primeArr[1001];

void setEratos() {
    primeArr[0] = primeArr[1] = 1;
    for (int i = 2; i * i <= 1000; i++) {
        if (primeArr[i] == 1) continue ;
        for (int k = i * i; k <= 1000; k += i)
            primeArr[k] = 1;
    }
}

int main(void) {
    stringstream ss;
    ss << cin.rdbuf();
    int count, number;
    ss >> count;

    setEratos();
    int result = 0;
    for (int i = 0; i < count; i++) {
        ss >> number;
        if (primeArr[number] == 0)
            result++;
    }
    cout << result;
    return 0;
}
