#include <queue>
#include <sstream>
#include <iostream>

#define COMMANDS 6

using namespace std;

stringstream _ss;
queue<int> _queue;
stringstream _result;

void pushCmd(void) {
    int number;
    _ss >> number;
    _queue.push(number);
}

void popCmd(void) {
    if (_queue.empty())
        _result << -1 << '\n';
    else {
        _result << _queue.front() << '\n';
        _queue.pop();
    }
}

void sizeCmd(void) {
    _result << _queue.size() << '\n';
}

void emptyCmd(void) {
    _result << _queue.empty() << '\n';
}

void frontCmd(void) {
    if (_queue.empty())
        _result << -1 << '\n';
    else 
        _result << _queue.front() << '\n';
}

void backCmd(void) {
    if (_queue.empty())
        _result << -1 << '\n';
    else 
        _result << _queue.back() << '\n';
}

int selectCommand(const string& command) {
    static std::string commandList[COMMANDS] = {
        "push", "pop", "size", "empty", "front", "back"
    };

    for (int i = 0; i < COMMANDS; i++) {
        if (commandList[i] == command)
            return (i);
    }
    return -1;
}

int main(void) {
    /* 0ms의 비밀 */
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    static void (*doCommand[COMMANDS]) (void) = {
        pushCmd, popCmd, sizeCmd, emptyCmd, frontCmd, backCmd
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
