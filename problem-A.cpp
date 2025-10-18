#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int x;cin>>x;
	    int total=x*4;
	    if(total<=1000){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
    return 0;
}
//input--
/*4
100
500
250
1000
*/

//output--
/*YES
NO
YES
NO
*/
