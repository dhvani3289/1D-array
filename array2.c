#include<stdio.h>
main(){
	int marks[]={54,70,43,56};
	int c=0,i;
	
	for(i=0; i<=3; i++){
		printf("%d\n",marks[i]);
		c++;
	}
	
	printf(" The length of array is : %d",c);
}
