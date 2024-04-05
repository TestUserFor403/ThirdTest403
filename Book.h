#pragma once
#include "includes.h"
/**
 * @brief Класс книги
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
 * @brief Реализация конструктера класса книжечка
*/
	Book();
	/**
 * @brief Реализация функции для получения названия книги
 * @return Название книги
*/
	string GetName();
	/**
 * @brief Реализация функции для получения имени автора
 * @return Имени автора
*/
	string GetAuthor();
	/**
 * @brief Реализация функции для получения даты публикации
 * @return Дата публикации
*/
	string GetDate();
	/**
 * @brief Реализация функции для получения кол-ва страниц
 * @return Кол-во страниц
*/
	size_t GetPapersAmount();
	/**
 * @brief Реализация функции для получения жанра книги
 * @return Жанр книги
*/
	string GetGenre();
	/**
 * @brief Метод печати полной информации о книге
*/
	void print_info();
};

