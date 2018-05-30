#include <string>
#include <fstream>
#include <iostream>

/*!
	\brief Функция вывода в поток
	\author WhiteRabbitRo
	\version 1.0
	\date May_23_2018
	
	Данная функции реализуют алогритм вывода текста, переданного как параметр, в стандартный поток вывода stdout и в любой другой поток out
*/
void print(const std::string& text, std::ostream& out = std::cout);
void print(const std::string& text, std::ofstream& out);
