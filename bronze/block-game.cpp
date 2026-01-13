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
    setIO("blocks"); 
    int n;
    cin>>n;
    vector<pair<string,string>> v(n);
    vector<string> s(1);
    for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;
    for(int i=0;i<n;i++){
        int b = s.size();
        for(int k=0;k<b;k++){
            s.push_back(s[k]+v[i].s);
            s[k] += v[i].f;
            
        }
    }
    vi res(26);
    vi place(26);
    for(int i=0;i<s.size();i++){
        place = res;
        for(int j=0;j<s[i].size();j++){
            if(place[s[i][j]-'a'] >0)place[s[i][j]-'a']--;
            else res[s[i][j]-'a']++;
        }
    }
    for(auto a : res) cout << a << endl;
}