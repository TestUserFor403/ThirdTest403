#include "Book.h"


Book::Book()
{
	cout << "Введите название: ";
	cin >> this->name;
	cout << "Введите автора: ";
	cin >> this->author;
	cout << "Введите дату выхода: ";
	cin >> this->date;
	cout << "Введите кол-во страниц: ";
	cin >> this->amount_papers;
	cout << "Введите жанр: ";
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
	cout << "\tНазвание: " << this->name
		<< "\n\tАвтор: " << this->author
		<< "\n\tДата публикации: " << this->date
		<< "\n\tКол-во страниц: " << this->amount_papers
		<< "\n\tЖанр: " << this->genre;
}
