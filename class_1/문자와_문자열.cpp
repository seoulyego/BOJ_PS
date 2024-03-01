#include <sstream>
#include <iostream>

int main(void) {
    std::stringstream ss;
    ss << std::cin.rdbuf();

    std::string string;
    int index;

    ss >> string >> index;

    std::cout << string[index - 1] << std::endl;
    return 0;
}