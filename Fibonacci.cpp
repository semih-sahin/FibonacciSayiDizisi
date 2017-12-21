#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
// SEMIH SAHIN - FIBONACCI SAYI DIZISINI ISTENILEN ADIMA KADAR YAZDIRAN PROGRAM

int main(){
	int adim=0, j=1;
	while (adim<=0){	// adim sayisi kullanicidan alinma asamasi
		system("cls");
		cout << "Lutfen adim sayisini pozitif tamsayi olarak giriniz.\n";
		cout << "Fibonacci sayi dizisi kacinci adima kadar ekrana yazdirilsin?\n";
		cin >> adim;
	}
	system("cls");
	unsigned int fibonacci[adim];	// adim sayisina gore fibonacci dizisi tanimlaniyor
	fibonacci[0]=1;		// dizinin ilk iki elemanini elle girmemiz gerekiyordu
	fibonacci[1]=1;
	for (int i=2; i<adim; i++){	// dizinin tum elemanlari yerlestiriliyor
		fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
	}
	cout << adim << " adimlik fibonacci sayi dizisi:\n" << fibonacci[0];
	while (j<adim){	// ekrana yazdirma asamasi
		cout << ", " << fibonacci[j];
		j++;
	}
	getch();
	return 0;
}
