#include <fstream>
#include <deque>
#include <iostream>
#include <string>

using std::deque;

deque<deque<char>> moveCrates(deque<deque<char>> crateStacks)
{

	int crateQuantity{}, fromIndex{}, toIndex{};
	std::string line{}, discard{};
	std::ifstream file{ "input.txt" };

	for (int i = 0; i < 502; i++)
	{
		std::getline(file, discard, ' ');
		std::getline(file, line, 'f');
		crateQuantity = stoi(line); //std::cout << crateQuantity <<' ';
		std::getline(file, discard, ' ');
		std::getline(file, line, 't');
		fromIndex = stoi(line) - 1;		//std::cout << fromIndex<<' ';
		std::getline(file, discard, ' ');
		std::getline(file, line);
		toIndex = stoi(line) - 1;		//std::cout << toIndex<<' '<<'\n';

		while (crateQuantity > 0) 
		{
			crateStacks[toIndex].push_back(crateStacks[fromIndex].back()); //adds crates to highest index (top)
			crateStacks[fromIndex].pop_back();
			--crateQuantity;
		}

	}
	return crateStacks;
}