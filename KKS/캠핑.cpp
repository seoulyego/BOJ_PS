#include <iostream>

using namespace std;

int main(void) {
    for (int i = 1; ; i++) {
        int L, P, V;
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0)
            break ;
        int mod = V % P;
        int result = (L * (V / P)) + (mod < L ? mod : L);
        cout << "Case " << i << ": " << result << "\n";
    }
}
