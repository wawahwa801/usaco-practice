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
    setIO("promote"); 
    vector<pi> v(4);
    vector<int> res;
    int a,b;
    for(int i=0;i<4;i++){
        cin >> a >> b;
        v[i] = mp(a,b);
    }
    for(int i=3;i>0;i--){
        res.push_back(v[i].s-v[i].f);
        v[i-1].s += v[i].s-v[i].f;
    }
    cout << res[2] << endl << res[1] << endl << res[0] << endl;
}