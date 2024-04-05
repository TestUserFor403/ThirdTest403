#include "Libriary.h"

Libriary* Libriary::instance = nullptr;

Libriary* Libriary::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Libriary;
	}
	return instance;
}
void Libriary::addBook()
{
	Book* b = new Book();
	books.push_back(*b);
	genres[books.back().GetGenre()]++;
	cout << "\n";
}
void Libriary::deleteBook(string name)
{
	for (auto it = books.begin(); it != books.end(); it++)
	{
		if (it->GetName() == name)
		{
			genres[it->GetGenre()]--;
			books.erase(it);
			cout << "����� �������!\n";
			return;
		}
	}
		cout << "����� �� �������!\n";
}

void Libriary::authorSearch(string author)
{
	int k = 1;
	for (auto b : books)
	{
		if (b.GetAuthor() == author)
		{
			cout << "����� �����: " << k << "\n";
			b.print_info();
			cout << "\n";
			k++;
		}
	}
}


void Libriary::genreSearch(string genre)
{
	int k = 1;
	for (auto b : books)
	{
		if (b.GetGenre() == genre)
		{
			cout << "����� �����: " << k << "\n";
			b.print_info();
			cout << "\n";
			k++;
		}
	}
}

void Libriary::printInfo()
{
	int k = 1;
	for (auto b : books)
	{
		cout << "����� �����: " << k << "\n";
		b.print_info();
		cout << "\n";
		k++;
	}
}

void Libriary::printGenresAmount()
{
	for (auto pair : genres)
	{
		cout << "����: " << pair.first
			<< "\n���-��: " << pair.second;
	}
}

void Libriary::printBooksForGenreAmount(string genre)
{
	if (genres.find(genre) != genres.end())
	{
		cout << "����: " << genre << endl
			<< "\n���-��: " << genres[genre];
	}
	else
		cout << "������ ����� ���";
}


Libriary::Libriary()
{
	cout << "������� ���-�� ����: ";
	int amount;
	cin >> amount;
	for (int i = 0; i < amount; i++)
	{
		books.emplace_back();
		genres[books.back().GetGenre()]++;
	}
}