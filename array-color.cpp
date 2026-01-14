#include<bits/stdc++.h>
using namespace std;
string solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum=0;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % 2 == 0) {
        return  "YES";

    }

    else {
        return "NO";

    }
}
int main(){
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;;
    }
    return 0;
}