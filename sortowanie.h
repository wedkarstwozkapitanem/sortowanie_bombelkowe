#pragma once
#include<iostream>
#include<vector>
#include<array>
#include<thread>

class sortowanie
{
	public:
		template<typename T>
		void sortuj(std::vector<T>& liczby, bool czyRosnoco);
		template<typename T>
		void sortuj(T* liczby, int rozmiar, bool czyRosnoco);
		template<typename T, std::size_t rozmiar>
		void sortuj(std::array<T, rozmiar>& liczby, bool czyRosnoco);
		sortowanie();
		~sortowanie() = default;
		void test();
};

