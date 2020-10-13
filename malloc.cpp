#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *list = malloc(3 * sizeof(int));
	if (list == NULL)
	{
		return 1;
	}


	for (int i = 0; i < sizeof(list)/sizeof(int); i++)
		list[i] = i+1;

	for (int i = 0; i < sizeof(list)/sizeof(int); i++)
		printf("%i\n", list[i]);

}
