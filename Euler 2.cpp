#include <iostream>

using namespace std;

int main()
{
	int current = 1;
	int firstback = 0;

	int storage = 0;

	int total = 0;

	while(current <= 4000000)
	{
		if(current % 2 == 0)
		{
			total += current;
		}

		storage = current;

		current += firstback;

		firstback = storage;
	}

	cout << total << endl;

	return 0;
}