#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << min(abs(a-b), abs(min(a,b)-min(c,d))+ abs(max(a,b)-max(c,d)));
}