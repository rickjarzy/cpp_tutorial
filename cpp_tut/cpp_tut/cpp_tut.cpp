// cpp_tut.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <string>


void call_division(int input_value) {
	std::cout << "\n===========================\n- Teiler herausfinden " << std::endl;
	std::cout << "- Teiler von " << input_value << " sind:\n";
	for (int teiler = 1; teiler <= input_value; ++teiler) {
		// ob teiler eine ganze zahl ist
		if (input_value % teiler == 0) {
			std::cout << teiler << std::endl;
		}
	}
	std::cout << "\n" << std::endl;
}

int main(int argc, const char* argv[])
{
	int input_teiler = 0;
	std::string name = "Paul_derCoole";
	char compare[] = "P";
	for (auto c : name)
	{	
		if (c == compare[0]) {
			std::cout << c << std::endl;
		}
		
	}

	// check if user input is zero
	if (argc <= 1) {
		std::cout << "- Programm Name: " << argv[0] << std::endl;
		std::cout << "- argc: " << argc << std::endl;
		std::cout << "- Geben sie eine Zahl ein: " << std::endl;
		std::cin >> input_teiler;

		if (!std::cin){
			std::cout << "# INPUT was wrong!" << std::endl;
			return 1;
		}
	}
	else {
		input_teiler = std::stoi(argv[1]);	// changes string (const char*) from cmd to int
	}

	// Teiler Function call
	call_division(input_teiler);
	return 0;


}


