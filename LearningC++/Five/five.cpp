#include <iostream>
#include <string>
#include <queue>
#include "five.h"

struct Tasks {
	std::string task;
	int priority;

	// Переопределяю оператор <
	bool operator<(const Tasks& other) const {
		return priority < other.priority;
	}
};

void setPriorityTask() {
	// Создаю очередь с приоритетом
	std::priority_queue<Tasks> tasks;

	std::string task;
	int priority;

	bool flag = true;
	char check;


	while (flag){
		std::cout << "Введите вашу задачу: ";
		std::getline(std::cin , task);
		std::cout << "Укажите приоритет для задачи от 0 до бесконечности: ";
		std::cin >> priority;

		tasks.push({task, priority});

		std::cout << "Продолжаем дальше записывать задачи? (Y-да, n-нет): ";
		std::cin >> check;
		std::cin.ignore();


		switch (check){
			case 'Y':
				break;
			case 'n':
				flag = false;
				break;
			default:
				std::cout << "Такого ответа нет" << std::endl;
				flag = false;
				break;
		}
	}
	std::cout << "\nРезультат:" << std::endl;

	while (!tasks.empty()) {
		std::cout << tasks.top().task << " Приоритет: " << tasks.top().priority << std::endl;
		tasks.pop();
	}
}