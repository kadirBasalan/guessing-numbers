#include <iostream.h>
#include <conio.h>

main()
{
int tavan,tutulan_sayi,tahmin,deneme=0;

	cout << "0 ile hangi sayi arasinda bir sayi tutmami istersiniz?";
	cin >> tavan;

srand(time(0));

tutulan_sayi=rand()%tavan;

		while (tutulan_sayi!=tahmin)
		{
		cout << "Tahmininizi yaziniz : ";
		cin >> tahmin;
		deneme=deneme+1;

			if (tahmin==tutulan_sayi)
			{
			cout << "Tahmininiz dogru! " <<deneme<<"'de buldunuz!" ;
			break;
			}

			if (tahmin<tutulan_sayi)
			{
			cout << "Daha buyuk bir sayi olmali. Tekrar deneyiniz.";
			}

			else cout << "Daha kucuk bir sayi olmali. Tekrar deneyiniz.";
		}

getch();
}

