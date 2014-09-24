/*		Valtteri Louhelainen

Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
seuraavalta:

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista käsitellä
useita lukupareja käyttäjän toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?
HUOM! goto -lauseen käyttä on KIELLETTY!!!!*/

#include <iostream>
using namespace std;

void main()
{
	int luku1;
	int luku2;
	short toimitus;
	bool jatka = true;
	bool jatka2 = true;
	float luku1f;
	float luku2f;

	cout << "Tervetuloa laskinsovellukseen\n";
	while (jatka)
	{
		cout << "Sy\x94t\x84 kaksi kokonaislukua\n\nAnna luku 1: ";
		cin >> luku1;
		cout << "Anna luku 2: ";
		cin >> luku2;
		jatka2 = true;
		while (jatka && jatka2)
		{
			cout << "\nSy\x94t\x84 halutun toimituksen numero\n0. Lopetus\n1. Summa\n2. Erotus\n3. Tulo\n4. Osam\x84\x84r\x84\n5. Jakoj\x84\x84nn\x94s\n6. Sy\x94t\x84 uudet luvut laskemista varten\n";
			cin >> toimitus;
			cout << "\n";
			if (toimitus == 0)
				jatka = false;
			if (toimitus == 1)
				cout << luku1 << " + " << luku2 << " = " << luku1 + luku2 << "\n";
			if (toimitus == 2)
				cout << luku1 << " - " << luku2 << " = " << luku1 - luku2 << "\n";
			if (toimitus == 3)
				cout << luku1 << " * " << luku2 << " = " << luku1 * luku2 << "\n";
			if (toimitus == 4)
			{
				if (luku2 == 0)
					cout << "Nollalla ei voi jakaa.";
				else
				{
					luku1f = luku1;
					luku2f = luku2;
					cout << luku1 << " / " << luku2 << " = " << luku1f / luku2f << "\n";
				}
			}
			if (toimitus == 5)
				if (luku2 == 0)
					cout << "Nollalla ei voi jakaa.";
				else
					cout << "Lukujen " << luku1 << " ja " << luku2 << " jakoj\x84\x84nn\x94s on " << luku1 - luku1 / luku2 * luku2 << "\n";
			if (toimitus == 6)
			{
				jatka2 = false;
			}
		}
	}
}