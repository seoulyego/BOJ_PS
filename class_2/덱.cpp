#include <deque>
#include <sstream>
#include <iostream>

#define COMMANDS 8

using namespace std;

stringstream _ss;
deque<int> _deque;
stringstream _result;

void pushFrontCmd(void) {
    int number;
    _ss >> number;
    _deque.push_front(number);
}

void pushBackCmd(void) {
    int number;
    _ss >> number;
    _deque.push_back(number);
}

void popFrontCmd(void) {
    if (_deque.empty())
        _result << -1 << '\n';
    else {
        _result << _deque.front() << '\n';
        _deque.pop_front();
    }
}

void popBackCmd(void) {
    if (_deque.empty())
        _result << -1 << '\n';
    else {
        _result << _deque.back() << '\n';
        _deque.pop_back();
    }
}

void sizeCmd(void) {
    _result << _deque.size() << '\n';
}

void emptyCmd(void) {
    _result << _deque.empty() << '\n';
}

void frontCmd(void) {
    if (_deque.empty())
        _result << -1 << '\n';
    else 
        _result << _deque.front() << '\n';
}

void backCmd(void) {
    if (_deque.empty())
        _result << -1 << '\n';
    else 
        _result << _deque.back() << '\n';
}

int selectCommand(const string& command) {
    static std::string commandList[COMMANDS] = {
        "push_front", "push_back", "pop_front", "pop_back", "size", "empty", "front", "back"
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
        pushFrontCmd, pushBackCmd, popFrontCmd, popBackCmd, sizeCmd, emptyCmd, frontCmd, backCmd
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
