#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void tinhtong(int a, int b) {
    cout << "a + b = " << (a + b) << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output", "w", stdout);
    #endif

    int a, b;
    cin >> a >> b;
    tinhtong(a, b);
    cout << "\n";
}
