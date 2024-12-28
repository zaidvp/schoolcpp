#include <iostream>

using namespace std;

int main () {
    
    int n, m;
    // controllo se m è maggiore n .
    do {
        do { // controllo se il numero è maggiore di 0
        cout << "inserisci il primo numero(>0): " << endl;
        cin >> n;
        if (n < 0) {
            cout << "In numero inserito è minore di 0, reinscerisci: " << endl;
        }
        } while (n < 0);
        
        do {// controllo se il numero è maggiore di 0
        cout << "Inserisci il secondo numero(>0): "<<endl;
        cin >> m;
        if (m < 0) {
            cout << "In numero inserito è minore di 0, reinscerisci: " << endl;
        }
        } while (m < 0);

        if (n > m) { 
            cout << "Il primo numero e' minore del secondo, reinscerisci: " << endl;
        }
    } while (n > m);
    
    
    
    return 0;
}