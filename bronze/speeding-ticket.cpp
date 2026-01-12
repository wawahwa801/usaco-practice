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
    int n,m, a=0;
    cin>>n>>m;

    vector<pi> v1(n,mp(0,0));
    vector<pi> v2(m);
    for(int i=1;i<n+m;i++){
        if(i<n) cin>>v1[i].f >> v1[i].s;
        else cin>>v2[i].f >> v2[i].s;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
        }
    }


}