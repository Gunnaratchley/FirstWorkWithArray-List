#include <iostream>

#include "array_list.h"

int main()
{
	nwacc::array_list<int> list(5);
	std::cout << list << std::endl;

	list.push_back(45);
	auto value = 5;
	list.push_back(value);
	list.emplace_back(4);

	std::cout << list << std::endl;

	std::cout << list[2] << std::endl;
	list[2] = 2;

	std::cout << list << std::endl;

	list.push_back(23);
	list.push_back(12);
	list.push_back(10);

	std::cout << list << std::endl;

	// We will not test the resize. 
	list.push_back(11);
	list.push_back(13);

	std::cout << list << std::endl;

	// lets test a for each loop

	for (const auto& element : list) {
		std::cout << element << " | ";
	} // notice here we are using a const iterator. 
	std::cout << std::endl;

	std::cout << list.size() << " " << list.capacity() << std::endl;
	return 0;
}