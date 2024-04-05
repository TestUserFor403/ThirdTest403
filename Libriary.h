#pragma once
#include "Book.h"
/**
 * @brief Класс библиотеки
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
	 * @brief Метод для получения экземпляра класса библиотеки
	 * @return Указатель на объект класса библиотеки
	*/
	static Libriary* getInstance();
	/**
	 * @brief Метод для добавления книги
	*/
	void addBook();
	/**
	 * @brief Метод для удаления книги
	 * @param name Название книги
	*/
	void deleteBook(string name);
	/**
	 * @brief Метод для поиска книги по автору
	 * @param author Имя автора
	*/
	void authorSearch(string author);
	/**
	 * @brief Метод для поиска книги по жанру
	 * @param author Название жанра
	*/
	void genreSearch(string genre);
	/**
	 * @brief Печать информации о всех книгах содержащихся в бибилотеке
	*/
	void printInfo();
	/**
	 * @brief Метод для печати кол-ва книг каждого жанра
	*/
	void printGenresAmount();
	/**
	 * @brief Метод для печати кол-ва книг определенного жанра
	 * @param genre Название жанра книги
	*/
	void printBooksForGenreAmount(string genre);
};

