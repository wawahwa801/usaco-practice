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
    vector<int> v(7);
    for(int i=0;i<7;i++) cin>> v[i];
    sort(all(v));
    cout << v[0] << " " << v[1] << " ";
    if(v[2] == v[0]+v[1]) cout << v[3] << endl;
    else cout << v[2] << endl;
}