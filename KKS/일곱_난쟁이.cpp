#include <algorithm>
#include <iostream>

using namespace std;

int _array[9];
int totalHeight;
int overHeight;

int main(void) {
    for (int i = 0; i < 9; i++) {
        cin >> _array[i];
        totalHeight += _array[i];
    }

    overHeight = totalHeight - 100;
    sort(_array, _array + 9);
    bool isFind = false;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; !isFind && j < 9; j++) {
            if (_array[i] + _array[j] == overHeight) {
                _array[i] = _array[j] = -1;
                isFind = true;
                break ;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (_array[i] == -1)
            continue ;
        cout << _array[i] << '\n';
    }
    return 0;
}
