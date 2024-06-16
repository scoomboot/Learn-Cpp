#include <iostream>
#include <string>

int main()
{
	std::string myString{ "Hello World!" };

	myString = "Eric";

	std::cout << myString << '\n';
	std::getline(std::cin >> std::ws, myString);
	std::cout << myString << '\n';

	return 0;
}