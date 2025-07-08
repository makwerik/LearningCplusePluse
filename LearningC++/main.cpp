#include <iostream>
#include "First/first.h"
#include <locale>
#include "Twoo/twoo.h"
#include <string>
#include "Three/three.h"
#include "Four/four.h"
#include "Five/five.h"
#include "Six/six.h"

int main() {
	setlocale(LC_ALL, "");
	// First:/
	/* Словарь с пользователями и сортировкой по ключам
			setPeople();
		*/
		/* Словарь без сортировки по ключам
			setPeopleUnorderMap();
		*/

	/* Twoo:/ 
		Множество с уникальными значениями и сортировкой
		const int size = 5;

		std::string books[size] = { "Book1", "Book2", "Book3", "Book3", "Book5" };

		setExample(books, size);

		Такой же метод, но без сортировки
			const int size = 5;
			unorderedSetExample(size);
	*/

	/* Three:
		Сложные коллекции, к примеру словарь со списком любмых блюд пользователей
		setDishes();
	/*/

	/* Four:
		Стек и очередь
		setStack();
		setQueue();
	*/

	/*
		Five:
		Очередь с приоритетом
		setPriorityTask();
	*/

	/*
		Динамический вектор
		students();

	*/

	




	return 0;
}