#include <vector>
#include <map>
#include <algorithm>
#include <sstream>
#include <iostream>

using namespace std;

int main(void) {
    stringstream ss;
    ss << cin.rdbuf();
    int count;
    ss >> count;

    vector<int> _vector;
    map<int, int> _map;
    for (int i = 0; i < count; i++) {
        int number;
        ss >> number;
        _vector.push_back(number);
        _map[number]++;
    }
    stringstream result;
    result << max_element(_map.begin(), _map.end())->first() << '\n';
    cout << result.str();
    return 0;
}
