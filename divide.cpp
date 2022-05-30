#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int oria = a;
    int d = 0;

    while(a >= b){
        a -= b;
        d++;
    }

    cout << oria << " / " << b << " = " << d << " ... " << a << endl;

    return 0;
}