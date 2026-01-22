#include<bits/stdc++.h>
using namespace std;
int main() {
    long long a,n,m,soln;
    cin >> n >> m >> a;
    soln = ((n+a -1)/a) * ((m+a -1)/a);
    cout << soln << endl;



    return 0;
}