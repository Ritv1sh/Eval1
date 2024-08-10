#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
void sieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;


    for (int p = 2; p <= sqrt(n); ++p) {
        if (prime[p]) {
            for (int multiple = p * p; multiple <= n; multiple += p) {
                prime[multiple] = false;
            }
        }
    }
    cout << "Prime numbers up to " << n << " are:\n";
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the upper limit to find primes: ";
    cin >> n;

    if (n >= 2) {
        sieveOfEratosthenes(n);
    } else {
        cout << "There are no primes less than 2." << endl;
    }

    return 0;
}
