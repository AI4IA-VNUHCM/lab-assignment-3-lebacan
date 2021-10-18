/*
1.	Input an array of n integers. Write a function to check whether
the array is symmetric or not (optional: use recursive)
Ex:
 ____________________________________ 
| Input: 1 2 3 2 1                   |
| Output: symmetric                  |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int arr[],int n){

	//Your codes here
	printf ("input n:");
    scanf("%d",&n);
	for (int i=0; i<n;i++){
		printf("enter a:",i);
	    scanf("&d",&arr[i]);
	}
	int check(int arr[], int n){
      int sym =0;
	  for (int i =0; i<n/2; i++){
             if (arr[i]!=arr[n-1-i])
			 sym ++;
	  }
	}
	  int result(int sym) {
              if (sym==0)  printf("symmetric"); 
	         else printf("not symmetric"); 
	  }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex1(testcase, argc);
	
	return 0;
}
