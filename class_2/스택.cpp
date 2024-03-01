#include <stack>
#include <sstream>
#include <iostream>

using namespace std;

stringstream _ss;
stack<int> _stack;
stringstream _result;

void pushCmd(void) {
    int number;
    _ss >> number;
    _stack.push(number);
}

void popCmd(void) {
    if (_stack.empty())
        _result << -1 << '\n';
    else {
        _result << _stack.top() << '\n';
        _stack.pop();
    }
}

void sizeCmd(void) {
    _result << _stack.size() << '\n';
}

void emptyCmd(void) {
    _result << _stack.empty() << '\n';
}

void topCmd(void) {
    if (_stack.empty())
        _result << -1 << '\n';
    else 
        _result << _stack.top() << '\n';
}

int selectCommand(const string& command) {
    static std::string commandList[5] = {
        "push", "pop", "size", "empty", "top"
    };

    for (int i = 0; i < 5; i++) {
        if (commandList[i] == command)
            return (i);
    }
    return -1;
}

int main(void) {
    /* 0ms의 비밀 */
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    static void (*doCommand[5]) (void) = {
        pushCmd, popCmd, sizeCmd, emptyCmd, topCmd
    };
    _ss << cin.rdbuf();
    int commandCount;
    _ss >> commandCount;

    for (int i = 0; i < commandCount; i++) {
        string command;
        _ss >> command;
        doCommand[selectCommand(command)]();
    }
    cout << _result.str();
    return 0;
}
