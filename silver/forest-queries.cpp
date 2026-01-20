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
    int n, q, a,b,c,d;
    cin >> n >> q;
    vector<vi> v(n+1, vi(n+1));
    string s;
    for(int i=1;i<n+1;i++){
        cin>>s;
        for(int j=1;j<n+1;j++){
            if(s[j-1] == '*'){
                v[i][j]++;
            }
            v[i][j] += v[i-1][j] + v[i][j-1] - v[i-1][j-1];
        }
    }
    for(int i=0;i<q;i++){
        cin >> c >> d >> a >> b;
        cout << v[a][b] - v[c-1][b] - v[a][d-1] + v[c-1][d-1] << endl;
    }
} 