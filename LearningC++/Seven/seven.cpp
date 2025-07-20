#include "seven.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>



void sortedNums() {
	std::vector<int> numbers;
	int count;

	std::cout << "������� ���-�� �����: ";
	std::cin >> count;

	int num = 0;
	for (int i = 0; i < count; i++) {
		std::cout << "������� ����� " << i + 1 << ": ";
		std::cin >> num;

		numbers.push_back(num);
	}

	std::cout << "\n������� ������: " << std::endl;
	for (const auto& n : numbers) {
		std::cout << n << " ";
	}

	std::sort(numbers.begin(), numbers.end());
	std::cout << "\n��������������� ������: " << std::endl;
	for (const auto& n : numbers) {
		std::cout << n << " ";
	}

	int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

	std::cout << "\n����� ����� � �������: " << sum << std::endl

	if (std::find(numbers.begin(), numbers.end(), 10) != numbers.end()) {
		std::cout << "\n����� 10 ������� � �������" << std::endl;
	}
	else {
		std::cout << "\n����� 10 �� ������� � �������" << std::endl;
	}
	
}