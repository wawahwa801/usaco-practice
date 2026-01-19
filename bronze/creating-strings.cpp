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
string n;
int res =0;
vector<string> v;
void permute(string characters, string s){
    if(s.size() == n.size()){
        res++;
        v.push_back(s);
        return;
    }
    for(int i=0;i<characters.size();i++){
        if(i>0){
            if(characters[i] != characters[i-1]){
                string a;
                if(i<characters.size()-1) a = characters.substr(0, i) + characters.substr(i+1);
                else a = characters.substr(0,i);
                permute(a, s+characters[i]);
            }
        }
        else{
            string a;
            if(i<characters.size()-1) a = characters.substr(0, i) + characters.substr(i+1);
            else a = "";
            permute(a, s+characters[i]);
        }
    }
}
int main() { 
    setIO(); 

    cin>>n;
    sort(n.begin(),n.end());
    permute(n, "");
    cout << res << endl;
    for(string c : v) cout << c << endl;
}