#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main(){
	int verilen,rastgele;
	
	srand(time(NULL));
	system("color 0f");

	SetConsoleTitle("OYUN OYNAYALIM");
	
	while(true) {
		system("cls");
		system("color 0f");
		cout<<"AKLINDAN BIR SAYI TUT (0-100 ARASINDA)";
		getchar();
		system("cls");
		
		cout<<"ARKADASINDA SANA TUTTUGUN SAYI KADAR VERDI";
		getchar();
		system("cls");
			
		verilen=1+rand()%20;
		cout<<"BENDE SANA "<<verilen<<" VERDIM . "; 
		getchar();
		system("cls");
		
		cout<<"YARIYA BOL";
		getchar();
		system("cls");
		
		cout<<"ARKADASININ SANA VERDIGINI ONA GERI VER.";
		getchar();
		system("cls");
		system("color 1f");
		cout<<" SONUC : "<<(float)verilen/2;
		getchar();
	}

}
