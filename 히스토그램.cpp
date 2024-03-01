#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int divideHisto(int histogram[], int left, int right) {
    if (left == right)
        return histogram[left];

    int mid = (left + right) / 2;
    int sLeft = divideHisto(histogram, left, mid);
    int sRight = divideHisto(histogram, mid + 1, right);
    int sMax = max(sLeft, sRight);

    int i = mid, j = mid + 1;
    int height = min(histogram[i], histogram[j]);
    int sMid = height * 2;
    while (left <= i && j <= right) {
        if (left < i && histogram[i - 1] > histogram[j + 1]) {
            i--;
            height = min(histogram[i], height);
        }
        else {
            j++;
            height = min(histogram[j], height);
        }
        sMid = max(sMid, height * (j - i + 1));
    }
    sMax = max(sMax, sMid);
    return sMax;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    stringstream ss;
    ss << cin.rdbuf();
    int N;
    ss >> N;

    int histogram[1000000];
    for (int i = 0; i < N; i++) {
        int tmp;
        ss >> tmp;
        histogram[i] = tmp;
    }
    cout << divideHisto(histogram, 0, N - 1);
    return 0;
}
