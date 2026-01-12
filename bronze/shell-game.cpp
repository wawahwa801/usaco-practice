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
    setIO("shell"); 
    vector<vi> v = {{0,0,1},{0,1,0},{1,0,0}};
    int n, res=0,res1=0,res2=0, place, a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a >> b >> c;
        place=v[0][a-1];
        v[0][a-1] = v[0][b-1];
        v[0][b-1] = place; 
        if(v[0][c-1] == 1) res++;
        place=v[1][a-1];
        v[1][a-1] = v[1][b-1];
        v[1][b-1] = place; 
        if(v[1][c-1] == 1) res1++;
        place=v[2][a-1];
        v[2][a-1] = v[2][b-1];
        v[2][b-1] = place; 
        if(v[2][c-1] == 1) res2++;
    }
    cout << max(res1, max(res2, res)) << endl;
}