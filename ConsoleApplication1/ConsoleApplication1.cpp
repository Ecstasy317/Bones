#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int rand_numb = rand() % 6 + 1;
	int my_numb;
	cout << "Enter a number from 1 to 6: ";
	cin >> my_numb;
	if (my_numb <= 0 || my_numb > 6)
	{
		cout << "\nYour number doesn't fit!\n";
		return 0;
	}
	if (rand_numb == my_numb)
	{
		cout << "You won!\n";
	}
	if (rand_numb != my_numb)
	{
		cout << "You lose!\n";
		cout << "There was a number: " << rand_numb << "\t";
	}
}