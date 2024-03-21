#include "sortowanie.h"


template<typename T>
void sortowanie::sortuj(std::vector<T>& liczby, bool czyRosnoco)
{
	bool zmiana{ false };
	do
	{
		zmiana = false;
		for (int i{}; i < liczby.size() - 1; i++)
		{
			if (czyRosnoco)
			{
				if (liczby[i] > liczby[i + 1])
				{
					std::swap(liczby[i], liczby[i + 1]);
					zmiana = true;
				}
			}
			else
			{
				if (liczby[i] < liczby[i + 1])
				{
					std::swap(liczby[i], liczby[i + 1]);
					zmiana = true;
				}
			}
		}
	} while (zmiana);
}


template<typename T>
void sortowanie::sortuj(T* liczby, int rozmiar, bool czyRosnoco)
{
	bool zmiana{ false };
	do
	{
		zmiana = false;
		for (int i{}; i<int(rozmiar - 1); i++)
		{
			if (czyRosnoco)
			{
				if (liczby[i] > liczby[i + 1])
				{
					std::swap(liczby[i], liczby[i + 1]);
					zmiana = true;
				}
			}
			else
			{
				if (liczby[i] < liczby[i + 1])
				{
					std::swap(liczby[i], liczby[i + 1]);
					zmiana = true;
				}
			}
		}
	} while (zmiana);
}


template<typename T, std::size_t rozmiar>
void sortowanie::sortuj(std::array<T, rozmiar>& liczby, bool czyRosnoco)
{
	bool zmiana{ false };
	do
	{
		zmiana = false;
		for (int i{}; i<int(rozmiar - 1); i++)
		{
			if (czyRosnoco)
			{
				if (liczby[i] > liczby[i + 1])
				{
					std::swap(liczby[i], liczby[i + 1]);
					zmiana = true;
				}
			}
			else
			{
				if (liczby[i] < liczby[i + 1])
				{
					std::swap(liczby[i], liczby[i + 1]);
					zmiana = true;
				}
			}
		}
	} while (zmiana);
}

/*
/*	title: sortowanie bombelkowe
/*	autor:Dominik Łempicki Kapitan
*/

sortowanie::sortowanie()
{
	sortowanie::test();
}


void sortowanie::test() {
	std::array<int, 8> tablicanowsza = { 3,2,5,8,4,12 };
	std::vector<double> wektor = { 28,12,16,8,15,1 };
	const int rozmiar = 3;
	double* tablicadynamiczna = new double[rozmiar];
	tablicadynamiczna[0] = 4;
	tablicadynamiczna[1] = 3;
	tablicadynamiczna[2] = 5;
	std::thread sortowanie_1([&]
		{
			sortuj(tablicanowsza, true);
			for (auto& i : tablicanowsza) std::cout << i << " ";
			std::cout << '\n';
		});

	sortowanie_1.join();
	std::thread sortowanie_2([&]
		{
			sortuj(wektor, true);
			for (auto& i : wektor) std::cout << i << " ";
			std::cout << '\n';
		});
	sortowanie_2.join();

	std::thread sortowanie_3([&] {
		sortuj(tablicadynamiczna, rozmiar, true);
		for (int i{}; i < rozmiar; i++) std::cout << tablicadynamiczna[i] << " ";
		});
	sortowanie_3.join();
}


/*void sortuj(int liczb[]) {
for (int i = 0;i<sizeof(liczb);i++) {
for (int j=1;j<sizeof(liczb);j++) {
if (liczb[j-1] > liczb[j]) {
std::swap(liczb[j-1],liczb[j]);
}
}
}

for (int i = 0;i<sizeof(liczb);i++) {
std::cout << liczb[i] << std::endl;
}
}*/

/*
/*	title: sortowanie bombelkowe
/*	autor:Dominik Łempicki Kapitan
*/