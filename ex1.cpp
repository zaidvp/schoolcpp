#include <iostream>

using namespace std;

int main() {
    int n, conta = 0, conto = 0; // conta = positivi, conto = negativi
    do {
        cout << "Inserisci un numero: " << endl;
        cin >> n;
        if (n > 0) {
            conta++;
        } else if (n < 0) {
            conto++;
        }
    } while (conta > conto);
    cout << "Il numero di numeri negativi e': " << conto << endl;
    return 0;
}