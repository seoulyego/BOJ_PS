#include <stack>
#include <sstream>
#include <iostream>

using namespace std;

bool validateVps(const string& ps) {
    stack<int> VPS;
    const int psLength = ps.length();
    int index = 0;
    while (index < psLength) {
        if (ps[index] == '(')
            VPS.push(1);
        else if (!VPS.empty())
            VPS.pop();
        else
            return (0);
        index++;
    }
    return (VPS.empty());
}

int main(void) {
    stringstream ss;
    ss << cin.rdbuf();
    int inputCount;
    ss >> inputCount;

    string result;
    while (inputCount--) {
        string inputStr;
        ss >> inputStr;
        if (validateVps(inputStr))
            result += "YES\n";
        else
            result += "NO\n";
    }
    cout << result;
    return 0;
}
