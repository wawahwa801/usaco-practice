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
    setIO("speeding"); 
    int n,m, a=0,b=0, res=0;
    cin>>n>>m;

    vector<pi> v1(n);
    vector<pi> v2(m);
    for(int i=0;i<n+m;i++){
        if(i<n) cin>>v1[i].f >> v1[i].s;
        else cin>>v2[i-n].f >> v2[i-n].s;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b+v1[j].f <= a+v2[i].f && b+v1[j].f > a)res = max(v2[i].s-v1[j].s, res);
            else if(b < a+v2[i].f && b >= a)res = max(v2[i].s-v1[j].s, res);
            else if(b+v1[j].f >= a+v2[i].f && b < a+v2[i].f) res = max(v2[i].s-v1[j].s, res);
            b+=v1[j].f;
        }
        b = 0;
        a += v2[i].f;
    }
    cout << res << endl;


}