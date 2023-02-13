#include<stdio.h>
main(){
	
	int i,a,b;
	
	printf("Enter a number : ");
	scanf("%d",&a);
	
	int a1[a],sum[a];
	
	 for(i=0; i<a; i++){
		printf("Value of[%d] : ",i);
	    scanf("%d",&a1[i]);	
	 }
	 
	printf("Enter a number : ");
    scanf("%d",&b);
	
	int a2[b];
	
	 for(i=0; i<b; i++){
		printf("Value of[%d] : ",i);
	    scanf("%d",&a2[i]);	
	 }
	 
	  for(i=0; i<a; i++){
	  	
	  	 for(i=0; i<b; i++){
	  	 	
		   sum[i]=a1[i]+a2[i];
		   
				printf("The sum of two 1D array is : %d\n",sum[i]);
		   }
	 }
	 
	 
	
}
