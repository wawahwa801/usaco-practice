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
    int n, in, res=0, count=0;
    cin>>n;
    for(int i=0;i<n*3;i++){
        cin >> in;
        if(in == 1) count++;
        if((i+1)%3 ==0){
            if(count>=2){
                res++;
            }
            count=0;
        }
    }
    cout << res << endl;
}