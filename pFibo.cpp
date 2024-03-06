#include <iostream>
using namespace std;

bool pFibonacci(int n) {
    int a = 0, b = 1;
    while (b <= n) {
        if (b == n)
            return true;
        int temp = b;
        b = a + b;
        a = temp;
    }
    return false;
}

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;
    if (pFibonacci(numero))
        cout << "O número " << numero << " pertence à sequência de Fibonacci!" << endl;
    else
        cout << "O número " << numero << " não pertence à sequência de Fibonacci!" << endl;
    return 0;
}
