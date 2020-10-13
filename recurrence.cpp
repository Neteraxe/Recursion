#include<iostream>

using namespace std;

int recurrenceto(int& i, int& target)
{
	cout << "current state of i is " << i << "\n";
	if(i > target)
		recurrenceto(--i, target);
	else if(i < target)
		recurrenceto(++i, target);
	else
		return i;
}

int main(int argc, char** argv)
{
	int i = atoi(argv[1]);
	int target = atoi(argv[2]);
	cout << recurrenceto(i, target);
	return 0;
}

