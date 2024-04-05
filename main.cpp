#include "Libriary.h"
#include <Windows.h>

void print_inf()
{
	cout << "Выберите операцию: \n"
		<< "\t1 - добавление книги;\n"
		<< "\t2 - удаление книги;\n"
		<< "\t3 - поиск книги по автору;\n"
		<< "\t4 - поиск книги по жанру;\n"
		<< "\t5 - печать всей информации о всех книгах в библиотеке;\n"
		<< "\t6 - печать кол-ва книг каждого жанра;\n"
		<< "\t7 - печать кол-ва книг определенного жанра;\n"
		<< "\t0 - выход;\n";
	cout << "Ваш выбор: ";
}

void do_op(int choice, Libriary* lb)
{
	string str;
	switch (choice)
	{
	case 1:
		lb->addBook();
		break;
	case 2:
		cout << "Введите название книги: ";
		cin >> str;
		Sleep(1000);
		system("cls");
		lb->deleteBook(str);
		break;
	case 3:
		cout << "Введите имя автора: ";
		cin >> str;
		Sleep(1000);
		system("cls");
		lb->authorSearch(str);
		break;
	case 4:
		cout << "Введите название жанра: ";
		cin >> str;
		Sleep(1000);
		system("cls");
		lb->genreSearch(str);
		break;
	case 5:
		lb->printInfo();
		break;
	case 6:
		lb->printGenresAmount();
		break;
	case 7:
		cout << "Введите название жанра: ";
		cin >> str;
		Sleep(1000);
		system("cls");
		lb->printBooksForGenreAmount(str);
		break;
	default:
		cout << "Операция неизвестна!\n";
		break;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Создание библиотеки...";
	Sleep(1000);
	system("cls");
	class Libriary* lb = Libriary::getInstance();
	Sleep(1000);
	system("cls");
	cout << "Библиотека создана.";
	Sleep(1000);
	system("cls");
	int choice;
	while (true)
	{
		print_inf();
		cin >> choice;
		Sleep(1000);
		system("cls");
		if (choice == 0)
		{
			cout << "Выход...";
			Sleep(1000);
			return 0;
		}
		do_op(choice,lb);
		system("pause");
		system("cls");
	}
}