#include "seven.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>



void sortedNums() {
	std::vector<int> numbers;
	int count;

	std::cout << "Введите кол-во чисел: ";
	std::cin >> count;

	int num = 0;
	for (int i = 0; i < count; i++) {
		std::cout << "Введите число " << i + 1 << ": ";
		std::cin >> num;

		numbers.push_back(num);
	}

	std::cout << "\nТекущий вектор: " << std::endl;
	for (const auto& n : numbers) {
		std::cout << n << " ";
	}

	std::sort(numbers.begin(), numbers.end());
	std::cout << "\nОтсортированный вектор: " << std::endl;
	for (const auto& n : numbers) {
		std::cout << n << " ";
	}

	int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

	std::cout << "\nСумма чисел в векторе: " << sum << std::endl;

	if (std::find(numbers.begin(), numbers.end(), 10) != numbers.end()) {
		std::cout << "\nЧисло 10 найдено в векторе" << std::endl;
	}
	else {
		std::cout << "\nЧисло 10 не найдено в векторе" << std::endl;
	}
	
}