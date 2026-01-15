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
    setIO("circlecross"); 
    string s;
    cin>>s;
    int res =0;
    vector<bool > v1(26,false);
    for(int i=0;i<s.size();i++){
        vector<bool> v(26, false);
        if(v1[s[i]-'A']) continue;
        v1[s[i]-'A'] = true;
        for(int j=i+1;j<s.size();j++){
            if(s[j] == s[i]) break;
            if(v[s[j]-'A']) v[s[j]-'A'] =false;
            else v[s[j]-'A'] = true;
        }
        for(int j=0;j<26;j++){
            if(v1[j]) continue;
            if(v[j]) {
                res++; 
            }
        }
    }
    cout << res << endl;
}