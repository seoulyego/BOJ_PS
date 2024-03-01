#include <queue>
#include <sstream>
#include <iostream>

using namespace std;

int main(void) {
    stringstream ss;
    queue<int> _;
    ss << cin.rdbuf();
    int N, K;
    ss >> N;
    for (int i = 0; i < N; i++)
        _.push(i + 1);
    ss >> K;

    stringstream result;
    result << '<';
    while (_.size()) {
        if (_.size() != N)
            result << ", ";
        for (int i = 0; i < K - 1; i++) {
            _.push(_.front());
            _.pop();
        }
        result << _.front();
        _.pop();
    }
    result << '>';
    cout << result.str();
    return 0;
}
