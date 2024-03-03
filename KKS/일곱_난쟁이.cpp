#include <algorithm>
#include <iostream>

using namespace std;

int dwarfs[9];
int totalHeight;
int n, m;
int overHeight;

int main(void) {
    for (int i = 0; i < 9; i++) {
        cin >> dwarfs[i];
        totalHeight += dwarfs[i];
    }

    overHeight = totalHeight - 100;
    sort(dwarfs, dwarfs + 9);
    bool ans = false;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; !ans && j < 9; j++) {
            if (dwarfs[i] + dwarfs[j] == overHeight) {
                dwarfs[i] = dwarfs[j] = -1;
                ans = true;
                break ;
            }
        }
    }

    for (int i = 0; i < 9; i++){
        if (dwarfs[i] == -1)
            continue;
        cout << dwarfs[i] << '\n';
    }
    return 0;
}
