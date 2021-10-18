/*
2.	Input an array of n integers. Sort the odd numbers in
increasing order and even numbers in decreasing order.
Ex:
 ____________________________________ 
| Input: 2 5 3 4 8 6 7 9 2           |
| Output: 8 3 5 6 4 2 7 9 2          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex2(int arr[], int n){
	//Your codes here
	printf ("input n:");
	scanf("%d",&n);
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] % 2 == 0)
			{
				if (arr[i] < arr[j] && arr[j] % 2 == 0)
					swap(arr, i, j);
			}
			else
			{
				if (arr[i] > arr[j] && arr[j] % 2 != 0)
					swap(arr, i, j);
			}
		}
	}
}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex2(testcase, argc);
	
	return 0;
}
