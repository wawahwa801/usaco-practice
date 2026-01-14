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
    int n;
    cin>>n;
    vector<pi> v(n);
    int res=-1;
    for(int i=0;i<n;i++) cin>>v[i].f;
    for(int i=0;i<n;i++) cin>>v[i].s;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++) {
            int a = pow(v[i].f-v[j].f,2) + pow(v[i].s-v[j].s,2);
            res = max(res, a);
        }
    }
    cout << res << endl;
    
}