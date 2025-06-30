#include "four.h"
#include <iostream>
#include <stack>
#include <queue>
#include <string>

void setStack() {
	// ����
	std::string tab;
	int countTabs = 0;
	std::stack<std::string> actions;

	std::cout << "������� ������� �� ������ �������: ";
	std::cin >> countTabs;
	for (int i = 0; i < countTabs; i++) {
		std::cout << "����� ���� ������� �� " << i + 1 << " �������: ";
		std::cin >> tab;
		actions.push(tab);
	}

	std::cout << "� ��� ������� " << countTabs << " �����(��/��/��)." << std::endl;
	while (!actions.empty()) {
		std::cout << actions.top() << std::endl;
		actions.pop();
	}

}

void setQueue() {
	// �������
	std::string action;
	std::queue<std::string> tasks;

	tasks.push("����� ������ �������� ������");
	tasks.push("���� ������ �������� ������");
	tasks.push("���� ������ �������� �������");

	int count = 0;

	while (!tasks.empty()) {
		std::cout << tasks.front() << " � ������� " << count + 1 << "��" << std::endl;
		tasks.pop();
		count++;
	}

}