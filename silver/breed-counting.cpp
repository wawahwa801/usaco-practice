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
    setIO("bcount"); 
    long long n,q, a, b;
    cin>>n>>q;
    vector<vector<long long>> v(n+1, vector<ll>(3));
    for(int i = 1;i<n+1;i++){
        cin>>a;
        v[i][a-1]++;
        v[i][0] += v[i-1][0];
        v[i][1] += v[i-1][1];
        v[i][2] += v[i-1][2];
    }
    for(int i=0;i<q;i++){
        cin>> a >> b;
        cout << v[b][0] - v[a-1][0] << " ";
        cout << v[b][1] - v[a-1][1] << " ";
        cout << v[b][2] - v[a-1][2] << endl;
    }
}