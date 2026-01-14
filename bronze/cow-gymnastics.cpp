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
    setIO("gymnastics"); 
    int k,n, res=0;
    cin >> k >> n;
    vector<vi> v(k,vi(n));
    for(int j=0;j<k;j++) for(int i=0;i<n;i++) cin >>v[j][i];
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            bool b = true;
            for(int m=1;m<k;m++){
                for(int p=0;p<n;p++) {
                    if(v[m][p] == v[0][i]) break;
                    else if(v[m][p] == v[0][j]){
                        b = false;
                        break;
                    }
                }
            }
            if(b) {
                res++;
            }
        }
    }
    cout << res << endl;
}