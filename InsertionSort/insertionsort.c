
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	unsigned char arr[] = {9,8,7,6,5,4};
	unsigned char n = sizeof(arr)/sizeof(arr[0]);
	int i ;
	insertionSort(arr , n);
	for(i = 0 ; i< n ; i++)
	{
		printf("%d \n",arr[i]);
	}

	return EXIT_SUCCESS;
}

void insertionSort(unsigned char *arr, unsigned char number)
{
	 char i , j , key ;
	for(i =1 ; i<number ; i++ )
	{
		key = arr[i];
		j= i - 1 ;
		while(j>=0 && arr[j]> key)
		{
			arr[j+1] = arr[j];
			j = j-1 ;
		}
		arr[j+1] = key ;
	}
}
