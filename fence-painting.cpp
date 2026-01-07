#include <iostream>

using namespace std;

int main() {
	int a, b, c,d; cin >> a >> b >> c >> d;
    int res = 0;
	for(int i=min(a,c);i<max(b,d);i++){
        if((i>=a && i<b)||(i>=c && i<d)){
            res++;
        }
    }
    cout << res << endl;
}