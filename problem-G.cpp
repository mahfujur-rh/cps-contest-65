#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int remainder = a % b;  //--example--
                                // 10 % 4 = 2
                                // 4 -2 = 2
        if(remainder == 0)
            cout << 0 << endl;
        else
            cout << b - remainder << endl;
    }

    return 0;
}
