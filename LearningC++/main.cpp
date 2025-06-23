#include <iostream>
#include "First/first.h"
#include <locale>


int main() {
	setlocale(LC_ALL, "");
	// First:/
	/* Словарь с пользователями и сортировкой по ключам
			setPeople();
		*/
		/* Словарь без сортировки по ключам
			setPeopleUnorderMap();
		*/
	setPeopleUnorderMap();
	return 0;
}