#include <iostream>



// Void -  variable that does not need to be specific to numbers.
// 
// "log"
// - Our term. This can be anything it just our written variable.
// Const char*
// pointer that can accept text, For example "message" is just our name This basically means that
// Const char* message == std::string message
// Message - String name, Just like 'int i = 300' except in text format.



/* To declare something from a different file instead of writing the block of code in this text
   you will rewrite your creation of whatever you are declaring without the block of code			*/


void  log(std::string message);


void Log(const char* Message);



int main() {

	Log("const char* Message");
	log("std::string message");
	

	std::cin.get();
}

/*void Log(const char* Message)
{
	std::cout << Message << std::endl;
}
*/
