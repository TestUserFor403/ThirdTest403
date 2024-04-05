#pragma once
#include "includes.h"
/**
 * @brief ����� �����
*/
class Book
{
private:
	string name;
	string author;
	string date;
	size_t amount_papers;
	string genre;
public:
	/**
 * @brief ���������� ������������ ������ ��������
*/
	Book();
	/**
 * @brief ���������� ������� ��� ��������� �������� �����
 * @return �������� �����
*/
	string GetName();
	/**
 * @brief ���������� ������� ��� ��������� ����� ������
 * @return ����� ������
*/
	string GetAuthor();
	/**
 * @brief ���������� ������� ��� ��������� ���� ����������
 * @return ���� ����������
*/
	string GetDate();
	/**
 * @brief ���������� ������� ��� ��������� ���-�� �������
 * @return ���-�� �������
*/
	size_t GetPapersAmount();
	/**
 * @brief ���������� ������� ��� ��������� ����� �����
 * @return ���� �����
*/
	string GetGenre();
	/**
 * @brief ����� ������ ������ ���������� � �����
*/
	void print_info();
};

