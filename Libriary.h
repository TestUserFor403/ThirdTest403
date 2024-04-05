#pragma once
#include "Book.h"
/**
 * @brief ����� ����������
*/
class Libriary
{
private:
	vector< class Book> books;
	map<string, size_t> genres;
	static class Libriary* instance;
	Libriary();
public:
	/**
	 * @brief ����� ��� ��������� ���������� ������ ����������
	 * @return ��������� �� ������ ������ ����������
	*/
	static Libriary* getInstance();
	/**
	 * @brief ����� ��� ���������� �����
	*/
	void addBook();
	/**
	 * @brief ����� ��� �������� �����
	 * @param name �������� �����
	*/
	void deleteBook(string name);
	/**
	 * @brief ����� ��� ������ ����� �� ������
	 * @param author ��� ������
	*/
	void authorSearch(string author);
	/**
	 * @brief ����� ��� ������ ����� �� �����
	 * @param author �������� �����
	*/
	void genreSearch(string genre);
	/**
	 * @brief ������ ���������� � ���� ������ ������������ � ����������
	*/
	void printInfo();
	/**
	 * @brief ����� ��� ������ ���-�� ���� ������� �����
	*/
	void printGenresAmount();
	/**
	 * @brief ����� ��� ������ ���-�� ���� ������������� �����
	 * @param genre �������� ����� �����
	*/
	void printBooksForGenreAmount(string genre);
};

