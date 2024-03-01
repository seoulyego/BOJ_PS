#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    stringstream ss;
    ss << cin.rdbuf();

    int testCount;
    ss >> testCount;

    stringstream result;
    for (int i = 0; i < testCount; i++) {
        size_t docsCount;
        int targetNumber;
        ss >> docsCount >> targetNumber;

        vector<int> docsVector(docsCount, 0);
        for (size_t j = 0; j < docsCount; j++)
            ss >> docsVector[j];
        vector<int>::iterator headIt = docsVector.begin();
        vector<int>::iterator curIt = headIt;
        vector<int> docsIndex;
        while (true) {
            vector<int>::iterator maxIt = max_element(docsVector.begin(), docsVector.end());
            if (*maxIt == 0) break ;
            int max = *maxIt;
            for (size_t j = 0; j < docsCount; j++) {
                if (*curIt == max) {
                    docsIndex.push_back(distance(headIt, curIt));
                    *curIt = 0;
                    break ;
                }
                curIt + 1 == docsVector.end() ? curIt = headIt : ++curIt ;
            }
        }
        result << distance(docsIndex.begin(), find(docsIndex.begin(), docsIndex.end(), targetNumber)) + 1 << "\n";
    }
    cout << result.str();
    return 0;
}
