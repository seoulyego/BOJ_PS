#include <set>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::stringstream ss;
    ss << std::cin.rdbuf();

    int countN;
    ss >> countN;
    std::set<int> setN;
    int number;
    for (int i = 0; i < countN; i++) {
        ss >> number;
        setN.insert(number);
    }

    int countM;
    ss >> countM;
    std::string result;
    for (int i = 0; i < countM; i++) {
        ss >> number;
        if (setN.find(number) == setN.end())
            result += "0\n";
        else
            result += "1\n";
    }
    std::cout << result;
    return 0;
}