#include <iostream>
#include "eight.h"
#include <vector>
#include <string>

void appendProducts() {

	std::string productName;
	int productPrice;

	char flag = 'Y';

	std::vector<std::pair<std::string, int>> products;

	while (flag == 'Y')
	{
		std::cout << "Введите название продукта: ";
		std::getline(std::cin, productName);

		std::cout << "Введите цену продукта: ";
		std::cin >> productPrice;

		products.push_back(std::make_pair(productName, productPrice));
		std::cout << "Добавить ещё продукт? (Y-да, n-нет): ";
		std::cin >> flag;
		std::cin.ignore();

	}

	getProducts(products);
	productsAvg(products);
}

void getProducts(std::vector<std::pair<std::string, int >> &products) {
	std::cout << "Список продуктов:" << std::endl;

	for (const auto& product : products) {
		std::cout << "Название: " << product.first << " || Цена: " << product.second << std::endl;
	}
}

void productsAvg(std::vector<std::pair<std::string, int>>& products) {
	if (products.empty()) {
		std::cout << "Нет продуктов для расчёта средней цены." << std::endl;
		return;
	}
	int avgPrice = 0;

	for (const auto& product : products) {
		avgPrice += product.second;
	}

	avgPrice /= products.size();

	std::cout << "Средняя цена продуктов: " << avgPrice << std::endl;
}