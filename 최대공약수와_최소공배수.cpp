#include <sstream>
#include <iostream>

using namespace std;

int GCD(int a, int b) {
    int r = a % b;
    if (r == 0)
        return b;
    return (GCD(b, r));
}

int LCM(int a, int b, int gcd) {
    return (a * b / gcd);
}

int main(void) {
    stringstream ss;
    ss << cin.rdbuf();
    int a, b;
    ss >> a >> b;

    stringstream result;

    int gcd = GCD(a, b);
    result << gcd << "\n";

    int lcm = LCM(a, b, gcd);
    result << lcm << "\n";

    cout << result.str();
    return 0;
}
