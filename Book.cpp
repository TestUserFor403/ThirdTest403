#include "Book.h"


Book::Book()
{
	cout << "������� ��������: ";
	cin >> this->name;
	cout << "������� ������: ";
	cin >> this->author;
	cout << "������� ���� ������: ";
	cin >> this->date;
	cout << "������� ���-�� �������: ";
	cin >> this->amount_papers;
	cout << "������� ����: ";
	cin >> this->genre;
	cout << "\n";
}

string Book::GetName()
{
	return this->name;
}

string Book::GetAuthor()
{
	return this->author;
}

string Book::GetDate()
{
	return this->date;
}

size_t Book::GetPapersAmount()
{
	return this->amount_papers;
}

string Book::GetGenre()
{
	return this->genre;
}

void Book::print_info()
{
	cout << "\t��������: " << this->name
		<< "\n\t�����: " << this->author
		<< "\n\t���� ����������: " << this->date
		<< "\n\t���-�� �������: " << this->amount_papers
		<< "\n\t����: " << this->genre;
}
