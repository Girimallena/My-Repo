#include <stdio.h>

void main(int argc, char** argv) {
    int given_number;
    printf("Enter a number to check if it is prime or Non prime : ");
    scanf("%d",&given_number);
    int count,itr,tst=0;
    count=given_number/2;
    if(given_number==0 || given_number==1){
			tst=1;
		}
    
    for (itr=2;itr<=count;itr++)
    {
    	if(given_number%itr==0){
    		tst=1;
		}
		
	}
	
	if(tst==1){
		printf("The number %d is not a Prime Number \n",given_number);
	}
	else{
		printf("The number %d is Prime Number \n",given_number);
		
	}
    
}

