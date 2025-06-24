#include <iostream>
#include <set>
#include <unordered_set>
#include "twoo.h"

void setExample(std::string arr[], int size) {
	//Структура данных, которая хранит уникальные значения в отсортированном виде, без значений, только ключи
	std::set<std::string> books;

	for (int i = 0; i < size; i++) {
		if (books.count(arr[i])) {
			std::cout << arr[i] << " уже присутсвует в множестве" << std::endl;
		}
		else {
			books.insert(arr[i]);
			std::cout << arr[i] << " добавлен в множество" << std::endl;
		}
	}
}

void unorderedSetExample(int size) {
	// Такой же метод, но без сортировки (более быстрый и меньше занимает памяти
	std::unordered_set<std::string> names;
	std::string name;

	for (int i = 0; i < size; i++) {
		std::cout << "Введите " << i + 1 << " е имя: ";
		std::cin >> name;
		if (!names.count(name)){
			names.insert(name);
		}
		else {
			std::cout << "Имя уже было добавлено" << std::endl;
			i--;
		}
	}
}