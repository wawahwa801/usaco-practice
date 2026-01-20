#include <bits/stdc++.h>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() { 
    setIO(); 
    int n =0;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    ll cur = v[0], m = v[0];

    for(int i=1;i<n;i++){
        cur = max(cur+v[i], v[i]);
        m = max(m, cur);
    }
    cout << m << endl;
}