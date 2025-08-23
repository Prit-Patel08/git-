#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int a;
    cin >> a;
    string a_str;
    cin >> a_str;
    int b;
    cin >> b;
    string b_str, c_str;
    cin >> b_str >> c_str;
    for(int i = 0; i < b; i++){
    if(c_str[i] == 'D'){
        a_str.push_back(b_str[i]);
    }
    else{
        a_str.insert(a_str.begin(), b_str[i]);
    }
}
    cout << a_str << endl;
}

int main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}