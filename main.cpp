#include "Libriary.h"
#include <Windows.h>

void print_inf()
{
	cout << "�������� ��������: \n"
		<< "\t1 - ���������� �����;\n"
		<< "\t2 - �������� �����;\n"
		<< "\t3 - ����� ����� �� ������;\n"
		<< "\t4 - ����� ����� �� �����;\n"
		<< "\t5 - ������ ���� ���������� � ���� ������ � ����������;\n"
		<< "\t6 - ������ ���-�� ���� ������� �����;\n"
		<< "\t7 - ������ ���-�� ���� ������������� �����;\n"
		<< "\t0 - �����;\n";
	cout << "��� �����: ";
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
		cout << "������� �������� �����: ";
		cin >> str;
		Sleep(1000);
		system("cls");
		lb->deleteBook(str);
		break;
	case 3:
		cout << "������� ��� ������: ";
		cin >> str;
		Sleep(1000);
		system("cls");
		lb->authorSearch(str);
		break;
	case 4:
		cout << "������� �������� �����: ";
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
		cout << "������� �������� �����: ";
		cin >> str;
		Sleep(1000);
		system("cls");
		lb->printBooksForGenreAmount(str);
		break;
	default:
		cout << "�������� ����������!\n";
		break;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "�������� ����������...";
	Sleep(1000);
	system("cls");
	class Libriary* lb = Libriary::getInstance();
	Sleep(1000);
	system("cls");
	cout << "���������� �������.";
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
			cout << "�����...";
			Sleep(1000);
			return 0;
		}
		do_op(choice,lb);
		system("pause");
		system("cls");
	}
}