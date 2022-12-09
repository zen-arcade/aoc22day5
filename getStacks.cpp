#include <fstream>
#include <string>
#include <deque>

using std::deque;

deque<deque<char>> getStacks()
{
	deque<deque<char>> crateStacks (9);		
	std::ifstream file{ "crates.txt" };
	std::string line{};
	while (std::getline(file, line))
	{
		for (int i = 1; i < 37; i+=4)		//the indexes of crates (letters) start at 1 and go up by 4
		{
			int j{ (i - 1) / 4 };			//gets the stack index
			if (line[i] != ' ')
			{
				crateStacks[j].push_front(line[i]); //stacks the crates bottom first -> index 0 is the lowest level, highest index is top
			}
		}

	}
	return crateStacks;
}