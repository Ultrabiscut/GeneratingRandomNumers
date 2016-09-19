#include <iostream>
#include <time.h>
using namespace std;



int main()
{
	srand(time(NULL)); //seed the random number generator with unqiue value

	//generate a number between 1 and 54
	cout << (rand() % 54 + 1 ) << endl;

	//generate a random number between 5 and 10
	cout << (rand() % 5 + 5) << endl;
	cout << (rand() % 5 + 5) << endl; 
	cout << (rand() % 5 + 5) << endl;

	return 0;
}