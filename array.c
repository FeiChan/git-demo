#include<stdio.h>

int foo();

int main()
{
	int arr[] = {12, 23, 2, 6, 7};
	for(int i= 0; i< sizeof(arr)/sizeof(int); i++)
	{
		printf("%d\n", arr[i]);

	}
	return 0;
}
