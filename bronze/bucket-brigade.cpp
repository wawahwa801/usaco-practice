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
    setIO("buckets"); 
    string s;
    int a=-1,b, c,d;
    for(int i=0;i<10;i++){
        cin >> s;
        for(int j=0;j<10;j++){
            if(s[j] == 'B' || s[j] == 'L'){
                if(a == -1){
                    a = i, b = j;
                }
                else{
                    if(a==i || b == j){
                        if(c==i||d==j){
                            cout << abs(a-i) + abs(b-j) +1 << endl;
                        }
                        else cout << abs(a-i) + abs(b-j) -1 << endl;
                    }
                    else cout << abs(a-i) + abs(b-j) -1 << endl;
                    
                    return 0;
                }
            }
            if(s[j] == 'R') c = i,d=j;
        }
    }
}