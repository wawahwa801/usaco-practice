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

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<long long> weights;

ll recurse_apples(int index, ll sum1, ll sum2) {
	if (index == n) { return abs(sum1 - sum2); }

	return min(recurse_apples(index + 1, sum1 + weights[index], sum2),
	           recurse_apples(index + 1, sum1, sum2 + weights[index]));
}

int main() {
	cin >> n;
	weights.resize(n);
	for (int i = 0; i < n; i++) { cin >> weights[i]; }

	cout << recurse_apples(0, 0, 0) << endl;
}