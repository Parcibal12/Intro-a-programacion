#include <iostream>
using namespace std;

int main() {
    double N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;
    double discounted_price = N;
    
    if (N > B) {
        discounted_price *= (1 - Y/100);
    } else if (N > A) {
        discounted_price *= (1 - X/100);
    }
    
    cout << discounted_price << endl;
    
    return 0;
}

