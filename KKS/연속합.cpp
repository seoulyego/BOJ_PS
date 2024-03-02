#include <vector>
#include <algorithm>
#include <limits>
#include <iostream>

using namespace std;

vector<int> _vector;

int continuousSum(int N) {
    int maxSum = numeric_limits<int>::min();
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += _vector[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
}

int main(void) {
    int N; cin >> N;
    _vector.reserve(N);
    for (int i = 0; i < N; i++) {
        int input; cin >> input;
        _vector.push_back(input);
    }
    cout << continuousSum(N);
    return 0;
}
