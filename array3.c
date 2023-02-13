#include<stdio.h>
main(){
	
	int i,n,sum=0,avg,c=0;
	
	printf("Enter size : ");
	scanf("%d",&n);
	
	int age[n];
	
	for(i=0; i<n; i++){
		printf("Value of[%d] : ",i);
	    scanf("%d",&age[i]);
	    sum=sum+age[i];
		c++;
	}
	    
	  for(i=0; i<n; i++){
		printf("Answer : %d\n",age[i]);
		sum=sum+age[i];
		c++;
	  }	
	
	
	avg=sum/c;
	printf("Average is : %d",avg);
}
	 
	
	
	

