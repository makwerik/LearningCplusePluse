#include "four.h"
#include <iostream>
#include <stack>
#include <queue>
#include <string>

void setStack() {
	// Стек
	std::string tab;
	int countTabs = 0;
	std::stack<std::string> actions;

	std::cout << "Сколько вкладок вы хотите открыть: ";
	std::cin >> countTabs;
	for (int i = 0; i < countTabs; i++) {
		std::cout << "Какой сайт открыть на " << i + 1 << " вкладке: ";
		std::cin >> tab;
		actions.push(tab);
	}

	std::cout << "У вас открыто " << countTabs << " вклад(ки/ок/ка)." << std::endl;
	while (!actions.empty()) {
		std::cout << actions.top() << std::endl;
		actions.pop();
	}

}

void setQueue() {
	// Очередь
	std::string action;
	std::queue<std::string> tasks;

	tasks.push("Серёжа пришел покушать первым");
	tasks.push("Свин пришёл покушать вторым");
	tasks.push("Рома пришел покушать третьим");

	int count = 0;

	while (!tasks.empty()) {
		std::cout << tasks.front() << " и покушал " << count + 1 << "ым" << std::endl;
		tasks.pop();
		count++;
	}

}