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
    setIO("word"); 
    int n,k, count = 0;
    string s;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> s;
        if(count+s.size() >k){
            cout << endl << s;
            count = s.size();
        }
        else{
            if(i>0) cout << " " << s;
            else cout << s;
            
            count += s.size();
        } 
    }
}