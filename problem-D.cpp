#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
//chatgpt explain
    size_t pos = S.rfind('.');
    cout << S.substr(pos + 1) << endl; 

    return 0;
}
