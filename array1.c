#include<stdio.h>
main(){
	
	int i,n;
	
	printf("Enter size : ");
	scanf("%d",&n);
	
	int age[n];
	
	 for(i=0; i<n; i++){
		printf("Value of[%d] : ",i);
	    scanf("%d",&age[i]);	
	 }
	 
	  for(i=0; i<n; i++){
		printf("Answer : %d\n",age[i]);
	 }
}
