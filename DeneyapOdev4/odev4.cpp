#include <iostream>       // 
using namespace std;	  // Her programda tekrar yazýlan kodlar
int main() {			  // 
	
	//Soru 1

	int sayi;
	cout << "Sayi giriniz:";
	cin >> sayi;

	if (sayi % 2 == 1) {
		if (sayi % 3 == 0)
			cout << "Sayi 3 ile tam bölünür.";
		else
			cout << "Sayi 3 ile tam bölünmez.";
	}
	else {
		if (sayi % 4 == 0)
			cout << "Sayi 4 ile tam bölünür.";
		else
			cout << "Sayi 4 ile tam bölünmez.";
	}


	//Soru 2
	
	int sayi = 13;
	if (sayi % 2 == 0)
		cout << sayi / 2;
	else
		cout << (sayi - 1) / 2;
	
	// Cevap = 6


	//Soru 3
	
	int sayi;
	cout << "Sayi giriniz:";
	cin >> sayi;
	if (sayi > 10)
		sayi -= 10;
	else
		sayi += 10;
	cout << sayi;


	// Hesap Makinesi

	int sayi1, sayi2;
	char islem;
	cout << "Birinci sayiyi giriniz:";
	cin >> sayi1;
	cout << "Yapilacak islemi giriniz";
	cin >> islem;
	cout << "Ikinci sayiyi giriniz:";
	cin >> sayi2;

	switch (islem) {
		case '+':
			cout << sayi1 + sayi2;
			break;
		case '-':
			cout << sayi1 - sayi2;
			break;
		case '*':
			cout << sayi1 * sayi2;
			break;
		case '/':
			cout << sayi1 / sayi2;
			break;
		default:
			cout << "Lutfen gecerli bir islem giriniz.";
			break;
	}
}

