#include <iostream>
#include <string>
#include <fstream>
#include <deque>
#include "Header.h"

int main()
{
	std::deque<std::deque<char>> stacks{ getStacks() };
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j <stacks[i].size(); j++)
		{
			std::cout << stacks[i][j];
		}
		std::cout << '\n';
	}
	std::cout << "----------------------------\n";
	std::deque<std::deque<char>> movedStacks{ moveCrates(stacks) };
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < movedStacks[i].size(); j++)
		{
			std::cout << movedStacks[i][j];
		}
		std::cout << '\n';
	}
	std::cout << "----------------------------\n";
	std::cout << "The crates on top are: ";
	for (int i = 0; i < 9; i++)
	{
		std::cout << movedStacks[i].back();
	}
	std::cout << "\n----------------------------\n";
	std::deque<std::deque<char>> movedStacks9001{ moveMultiCrates(stacks) };
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < movedStacks9001[i].size(); j++)
		{
			std::cout << movedStacks9001[i][j];
		}
		std::cout << '\n';
	}
	std::cout << "The crates on top are: ";
	for (int i = 0; i < 9; i++)
	{
		std::cout << movedStacks9001[i].back();
	}
	system("pause");
	return 0;
}
		
