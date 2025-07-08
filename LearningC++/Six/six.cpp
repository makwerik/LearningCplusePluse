#include "six.h"
#include <iostream>
#include <vector>
#include <string>

class Student {
private:
	std::string name;
	std::vector<int> grades;

public:
	Student() {
		this->name = "Неизвестно";
	}
	Student(std::string name, int grades[], int size) {
		this->name = name;
		for (int i = 0; i < size; i++) {
			this->grades.push_back(grades[i]);
		}

	}
	~Student() {
		std::cout << "class " << this->name << " delete" << std::endl;
	};

	void setName(std::string name) {
		this->name = name;
	}

	void setGrade(int grade) {
		this->grades.push_back(grade);
	}

	std::string getName() {
		return this->name;
	}
	
	const std::vector<int> getGrades() {
		return this->grades;
	}
};

void students() {
	std::vector<Student> students;
	int maxStudents = 0;

	std::cout << "Сколько у вас студентов: ";
	std::cin >> maxStudents;

	for (int i = 0; i < maxStudents; i++) {
		Student s;
		std::string name;
		int countGrades = 0;

		std::cout << "Введите имя " << i + 1 << "-го студента: ";
		std::cin >> name;

		s.setName(name);

		std::cout << "Введите какое кол-во оценок у " << s.getName() << ": ";
		std::cin >> countGrades;

		for (int j = 0; j < countGrades; j++) {
			int grade = 0;
			std::cout << "Оценка номер " << j + 1 << ": ";
			std::cin >> grade;
			s.setGrade(grade);
		}

		students.push_back(s);

	}

	for (auto s : students) {
		std::cout << "Студент: " << s.getName() << std::endl;
		std::cout << "Оценки: " << std::endl;
		for (auto g : s.getGrades()) {
			std::cout << g << std::endl;
		}
	}
}