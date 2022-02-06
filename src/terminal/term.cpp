#include <iostream>
#include "./../etc/command.cpp"
#include <string>
#include <sstream>
void clear_screen()
{
	system("clear");
}
int get_terminal_columns()
{
	std::stringstream stringintconverter(exec("tput cols"));
	int x = 0;
	stringintconverter >> x;
	return x;
}
int get_terminal_lines()
{
	std::stringstream stringintconverter(exec("tput lines"));
	int x = 0;
	stringintconverter >> x;
	return x;
}