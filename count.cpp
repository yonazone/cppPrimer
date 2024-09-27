#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> vec = {1, 2, 3, 4, 5, 4, 2, 3, 2, 5, 2, 2, 1, 2};

int main()
{
	int count = std::count(vec.cbegin(), vec.cend(), 2);

	std::cout << "Count = " << count << std::endl;

	return 0;
}
