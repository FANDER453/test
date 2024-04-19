#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>
#include "windows.h"
using namespace std;
int attempt;
int question_1() {
	srand(time(NULL));
	char result;
	cout << "\tВопрос 1\nГоша тупой?\n1.ДА\n2.Однозначно\n3.Нет\n";
	cout << "Ваш ответ: ";
	cin >> result;
	if (result == '1'){
		cout << "Ты прав" << endl;
		attempt += rand() % 10 + 1;
	}
	if (result == '2') {
		cout << "Ты прав" << endl;
		attempt += 4;
	}
	if (result == '3') {
		cout << "Ты Гоша";
		exit(0);
	}
	return 0;

}
int question_2() {
	char result;
	cout << "\tВопрос 2\nТы мудак?\n1.ДА\n2.Однозначно\n3.Нет\n";
	cout << "Ваш ответ: ";
	cin >> result;
	if (result == '1') {
		cout << "Я так и думал";
		exit(0);
	}
	if (result == '2') {
		cout << "Ты Никита";
		exit(0);
	}
	if (result == '3') {
		cout << "Это хорошо" << endl;
		attempt += rand() % 5 + 1;
	}
	return 0;
}
int question_3() {
	char result;
	cout << "\tВопрос 3\nСаня говноед?\n1.ДА\n2.Однозначно\n3.Нет\n";
	cout << "Ваш ответ: ";
	cin >> result;
	if (result == '1') {
		cout << "Ты прав" << endl;
		attempt += rand() % 2 + 1;
	}
	if (result == '2') {
		cout << "Ты прав" << endl;
		attempt += 4;
	}
	if (result == '3') {
		cout << "Ты Костя";
		exit(0);
	}
	return 0;
}

int test() {
	
	question_1();
	question_2();
	question_3();
	return 0;


}
int start() {
	char y;
	do {
		
		cout << "Вы хотите попробовать угадать случайное число?(y/n): ";
		cin >> y;
		if (y == 'y') {
			cout << "Для начала нужно пройти тест" << endl;
			Sleep(1000);
			test();
		}
		else {
			cout << "Ну ладно";
			break;
		}
	} while (y == 'n');
	return 0;
}



int random_number() {
	int rand_num, num;
	rand_num = rand() % 100 + 1;
	cout << "Вы успешно прошли тест!";
	do {
		cout << "У вас " << attempt << " попытка" << endl;
		cout << "Введите число от 1 до 100: ";
		cin >> num;
		if (num == rand_num) {
			cout << "Вы угадали!!!";
			exit(0);
		}
		if (num > rand_num) {
			cout << "Загаданное число меньше" << endl;
		}
		else {
			cout << "Загаданное число больше" << endl;
		}
		attempt--;
		if (attempt <= 0) {
			cout << "Вы проиграли" << endl;
			cout << "Загаданное число равно: " << rand_num;
			break;
		}





	} while (num != rand_num);
	return 0;

}

int main() {
	setlocale(LC_ALL, "ru-RU");
	start();
	random_number();
	system("pause");
}
