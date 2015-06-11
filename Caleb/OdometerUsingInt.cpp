#include <iostream>
#include <stdlib.h>
using namespace std;


void recursive(int count)
{
	//I didn't use 9999 because computer won't run it. 
	if (count <= 99)
	{
		printf("%i\n", count);
		recursive(count+1);
	}
}

int main()
{
	//Still trying to convert it to string
	int count = 0;
	recursive(count);
	system("pause");
	return 0;
}