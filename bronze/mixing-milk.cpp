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
    setIO("mixmilk"); 
    int place=0, res=0;
    vector<pi> v(3);
    cin >> v[0].f >> v[0].s >> v[1].f >> v[1].s >> v[2].f>>v[2].s;
    for(int i=0;i<99;i+=3){
        place = min(v[0].s, v[1].f-v[1].s);
        v[1].s += place;
        v[0].s -= place;
        place = min(v[1].s, v[2].f-v[2].s);
        v[2].s += place;
        v[1].s -= place;
        place = min(v[2].s, v[0].f-v[0].s);
        v[0].s += place;
        v[2].s -= place;
        
    }
    place = min(v[0].s, v[1].f-v[1].s); 
    v[1].s += place;
    v[0].s -= place;
    cout << v[0].s << endl << v[1].s << endl << v[2].s << endl;
}