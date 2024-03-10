#include <iostream>

using namespace std;

void czyPierwsza(int a) {
	if (a == 0 || a == 1) {
		cout << "Liczba nie jest pierwsza" << endl;
		return;
	}
	
	for (int i = 2; i <= a/2; i++) {
		if (a % i == 0) {
			cout << "Liczba nie jest pierwsza" << endl;
			return; 
		}
	}

	cout << "Liczba jest pierwsza" << endl;
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
	cout << "2. Czy liczba jest pierwsza" << endl;
        cin >> wyjscie;
	switch (wyjscie) {
		case 0: 
			break;
		case 2:
			int a;
			cout << "Podaj liczbe naturalna: ";
			cin >> a;
			czyPierwsza(a); 
			break;
		default:
			cout << "Zly wybor" << endl;
			break;
	}
    } while(wyjscie != 0);
    return 0;
}
