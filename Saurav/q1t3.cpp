#include <iostream>

using namespace std;

int main() {
    int n, a = 0, b = 1, c = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci series up to " << n << ":\n";
    while (c <= n) {
        cout << c << " ";
        a = b;    
        b = c;    
        c = a + b;
    }
    cout << endl;
    return 0;
}
