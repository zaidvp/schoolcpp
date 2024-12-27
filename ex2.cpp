#include <iostream>

using namespace std;

int main () {
    int numero=0, contatore=0, numeroTemp=0;
    do {
        numeroTemp = numero;
        cout << "Inserisci un numero: ";
        cin >> numero;
        contatore++;
    } while (numero >= numeroTemp);

    cout << "Il numero di numeri inseriti in ordine crescente e': " << contatore << endl;
    return 0;
}