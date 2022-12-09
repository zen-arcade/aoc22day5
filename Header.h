#pragma once
#include <deque>
using std::deque;

deque<deque<char>> getStacks();
deque<deque<char>> moveCrates(deque<deque<char>> crateStacks);
deque<deque<char>> moveMultiCrates(deque<deque<char>> crateStacks);