#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
      
        int cost1 = 5 * x;       
        int cost2 = y + 3 * x;     
        int cost3 = 2 * y + x; 
        cout << min({cost1, cost2, cost3}) << endl;
    }
    return 0;
}
