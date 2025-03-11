#include <iostream>
#include <fstream>
using namespace std;

double sumDigits(double n) {
    double sum = 0;
    while (n > 0) {
        sum += static_cast<int>(n) % 10;
        n /= 10;
    }
    return sum;
}

void algorithmA(double n, ofstream &fout) {
    cout << "3 5\n";
    if (n > 1) {
        for (double i = -10; i <= n; i++) {
            double n1 = 6*i - 1;
            double n2 = 6*i + 1;
            cout << n1 << " " << n2;
            cout << " " << sumDigits(n1 * n2) << "\n";

            fout << n1 << " " << n2;
            fout << " " << sumDigits(n1 * n2) << "\n";
        }
    }
}

int main() {
    ofstream fout("output.txt");

    int n;
    cin >> n;
    
    algorithmA(n, fout);
    
    return 0;
}