#include <map>
#include <vector>
#include <sstream>
#include <iostream>
// #include <algorithm>

using namespace std;

int main(void) {
    stringstream ss; ss << cin.rdbuf();
    int userCount; ss >> userCount;

    map< int, vector<string> > sortedByAge;
    stringstream result;
    for (int i = 0; i < userCount; i++) {
        int age; string name;
        ss >> age >> name;
        auto iter = sortedByAge.find(age);
        if (iter == sortedByAge.end()) {
            vector<string> names;
            names.push_back(name);
            sortedByAge.insert(make_pair(age, names));
        }
        else
            (iter->second).push_back(name);
    }
    for (auto user : sortedByAge) {
        for (auto name : user.second) {
            result << user.first << ' ' << name << '\n';
        }
    }
    cout << result.str();
    return 0;
}





// struct User {
//     int age;
//     string name;
// };

// bool operator<(const User& lhs, const User& rhs) {
//     return lhs.age < rhs.age;
// }

// int main(void) {
//     stringstream ss; ss << cin.rdbuf();
//     int userCount; ss >> userCount;

//     vector<User> userList;
//     stringstream result;
//     for (int i = 0; i < userCount; i++) {
//         struct User tmp;
//         ss >> tmp.age >> tmp.name;
//         userList.push_back(tmp);
//     }
//     stable_sort(userList.begin(), userList.end());
//     for (auto iter : userList) {
//         result << iter.age << ' ' << iter.name << '\n';
//     }
//     cout << result.str();
//     return 0;
// }
