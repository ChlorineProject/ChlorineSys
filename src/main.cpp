#include <iostream>
#include "./etc/info.h"
#include "./terminal/color.h"
#include <string>
#include "./terminal/term.cpp"
int main()
{
	clear_screen();
	int columns = get_terminal_columns();
	std::cout << CYAN << "Chlorine " << BLUE << std::string(CHLORINE_VERSION) << CYAN << " 2022 (c) https://github.com/ChlorineProject" << RESET << "\n";
}