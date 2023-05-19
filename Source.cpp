#include "ARX.h"
#include "Plik.h"
#include "Plik_JSON.h"

int main() {
	ARX x(1, 1, 1);
	x.wypiszStopnie();
	//x.wpiszParametry();
	std::vector<double> wektorA = { 1, 0.8 };
	std::vector<double> wektorB = { 0.5, -0.7 };
	x.wpiszParametry(wektorA, wektorB);

	std::vector<std::vector<double>> parametry;
	parametry = x.wypiszParametry();

	x.wypiszWielomiany();
	std::cout << "Symulacja: \n";
	x.symuluj(1);
	x.symuluj(1);
	x.symuluj(1);
	x.symuluj(1);

	// LAB2
	/*Plik plik("data.txt");
	plik.zapisParametrow_Plik(x);*/

	//json
	Plik_JSON plikjson("data.json");
	plikjson.zapisParametrow_Plik(x, "arx1");
	plikjson.odczytParametrow_Plik(x, "arx1");


	return 0;
}


