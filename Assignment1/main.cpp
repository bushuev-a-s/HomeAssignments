/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * My first home assignment
 * Main file
 */
#include "hello.h"
#include <iostream>

int main() {
	std::string c = "world";
	myproject::sayHello(c);
	while (true) {
		std::string c2;
		std::getline(std::cin,c2);
		myproject::sayHello(c2);
	}
	return 0;
}

