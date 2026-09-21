#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 0) cnt0++;
        else cnt1++;
    }
  
   	if(cnt1 >= cnt0){
		cout << "Bessie" << endl;
	}else{
		cout << "Elsie" << endl;
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
    	solve();
	}
    
    return 0;
}
