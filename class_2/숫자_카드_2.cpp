#include <map>
#include <sstream>
#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N, M;
    stringstream ss;
    ss << cin.rdbuf();
    ss >> N;
    map<int, int> cardSet;
    for (int i = 0; i < N; i++) {
        int card;
        ss >> card;
        cardSet[card]++;
    }

    ss >> M;
    stringstream result;
    for (int i = 0; i < M; i++) {
        int number;
        ss >> number;
        if (i != 0)
            result << ' ';
        if (cardSet.find(number) == cardSet.end())
            result << 0;
        else
            result << cardSet[number];
    }
    cout << result.str();
    return 0;
}
