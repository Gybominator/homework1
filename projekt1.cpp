#include <iostream>

using namespace std;

void silnia(int a) {
	int wynik = 1;

	if(a == 0 || a == 1) 
		return 1;

	for(int i = 2; i <= a; i++ ) {
		wynik *= i;
	}

	cout << "Wynik: " <<  wynik << endl;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
