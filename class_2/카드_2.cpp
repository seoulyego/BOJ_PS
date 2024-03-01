#include <queue>
#include <sstream>
#include <iostream>

using namespace std;

int main(void) {
    stringstream ss;
    ss << cin.rdbuf();
    int N;
    ss >> N;

    queue<int> cardSet;
    for (int n = 0; n < N; n++)
        cardSet.push(n + 1);
    bool rotate = false;
    while (cardSet.size() > 1) {
        if (rotate) {
            cardSet.push(cardSet.front());
            rotate = false;
        }
        else
            rotate = true;
        cardSet.pop();
    }
    cout << cardSet.front() << '\n';
    return 0;
}
