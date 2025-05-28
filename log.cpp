#pragma once
#include <iostream>
void Log(const char* Message)
{
	std::cout << Message << std::endl;
}

// OR


// Using std::string instead of const char*
void log(std::string message)
{
	std::cout << message << std::endl;
}