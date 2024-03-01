#include <stack>
#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    stack<int> _stack;
    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        int number;
        cin >> number;
        if (number == 0)
            _stack.pop();
        else
            _stack.push(number);
    }
    int sum = 0;
    while (!_stack.empty()) {
        sum += _stack.top();
        _stack.pop();
    }
    cout << sum;
    return 0;
}
