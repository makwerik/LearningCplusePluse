#include <map>
#include <iostream>
#include <string>
#include <unordered_map>
#include "first.h"


void setPeople() {
	const int SIZE = 5;
	std::string name;
	int age;

	// ������� � ����������� ������ �� ���������
	std::map<std::string, int> users;

	// ���������� ������� ����� ����
	for (int i = 0; i < SIZE; i++) {
		std::cout << "������� ��� " << i + 1  << " �� " << "��������: ";
		std::cin >> name;
		std::cout << "������� ������� �������� �� ����� " << name << ": ";
		std::cin >> age;

		users[name] = age;
	}

	/*����� ����������
	(auto - ���������� ��� ���������� ���, � ������ ������ map
	&-������, ����� �� ���������� ������ ����(�������� ������ � ��������))*/ 
	for (const auto& pair : users) {
		std::cout << "���: " << pair.first << ". �������: " << pair.second << std::endl;
	}
}

void setPeopleUnorderMap() {
	const int SIZE = 3;
	std::string name;
	int age;

	// ������� ��� ���������� ������ (����� �������)
	std::unordered_map<std::string, int> users;

	for (int i = 0; i < SIZE; i++) {
		std::cout << "������� " << i + 1 << " ������������ � ������� (����� ������): ";
		std::cin >> name >> age;
		users[name] = age;
	}

	std::cout << "\n������ �������������:\n";

	for (const auto& pair : users) {
		std::cout << pair.first << " - " << pair.second << std::endl;
	}
}