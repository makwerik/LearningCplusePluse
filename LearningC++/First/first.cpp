#include <map>
#include <iostream>
#include <string>
#include <unordered_map>
#include "first.h"


void setPeople() {
	const int SIZE = 5;
	std::string name;
	int age;

	// Словарь с сортировкой ключей по умолчанию
	std::map<std::string, int> users;

	// Наполнение словаря через цикл
	for (int i = 0; i < SIZE; i++) {
		std::cout << "Введите имя " << i + 1  << " го " << "человека: ";
		std::cin >> name;
		std::cout << "Введите возраст человека по имени " << name << ": ";
		std::cin >> age;

		users[name] = age;
	}

	/*Вывод информации
	(auto - компилятор сам определяет тип, в данном случае map
	&-ссылка, чтобы не копировать каждую пару(экономим память и ускоряем))*/
	for (const auto& pair : users) {
		std::cout << "Имя: " << pair.first << ". Возраст: " << pair.second << std::endl;
	}
}

void setPeopleUnorderMap() {
	const int SIZE = 3;
	std::string name;
	int age;

	// Словарь без сортировки ключей (более быстрый)
	std::unordered_map<std::string, int> users;
	
	for (int i = 0; i < SIZE; i++) {
		std::cout << "Введите " << i + 1 << " пользователя и возраст (через пробел): ";
		std::cin >> name >> age;
		users[name] = age;
	}

	std::cout << "\nСписок пользователей:\n";

	for (const auto& pair : users) {
		std::cout << pair.first << " - " << pair.second << std::endl;
	}
}