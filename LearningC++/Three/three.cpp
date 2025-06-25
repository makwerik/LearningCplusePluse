#include "three.h"
#include <locale>
#include <map>
#include <vector>
#include <string>
#include <iostream>

void setDishes() {
	// Создаю хранилище хранения любимых блюд у разных людей
	std::map<std::string, std::vector<std::string>> dishes;
	std::string name;
	std::string dishe;
	const int SIZE_NAMES = 2;
	int size_dishes;
	
	for (int i = 0; i < SIZE_NAMES; i++) {

		std::cout << "Введите имя: ";
		std::cin >> name;
		std::cout << "Введите кол-во блюд для " << name <<": ";
		std::cin >> size_dishes;

		std::cin.ignore();
		for (int j = 0; j < size_dishes; j++) {
			std::cout << "Введите " << j + 1 << "е блюдо: ";
			std::getline(std::cin, dishe);

			dishes[name].push_back(dishe);

		}
		std::cout << "\n" << std::endl;

	}

	// Вывод информации
	for (const auto& pair : dishes) {
		std::cout << pair.first << " и его любимые блюда:" << std::endl;
		for (const auto& sec : pair.second) {
			std::cout << "- " << sec << std::endl;
		}
	}

}