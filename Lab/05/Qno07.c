#include<stdio.h>
int main(){
	 float actual_amount,saved_amount,disc_amount,disc;
	 
	printf("Your Actual Amount :");
	scanf("%f",&actual_amount);
	
	
	if (2000<=actual_amount<=4000 ){
		disc= (actual_amount*20/100);
		disc_amount=actual_amount-disc;
		printf("YOUR DISCOUNTED AMOUNT IS : %f",disc_amount);
	}
	
	else if(4000<actual_amount<=6000 ){
		disc= (actual_amount*30/100);
		disc_amount=actual_amount-disc;
		printf("YOUR DISCOUNTED AMOUNT IS: %f",disc_amount);

	}
	
	else if(actual_amount<6000 ){
		disc= (actual_amount*50/100);
		disc_amount= actual_amount -disc;
		printf("YOUR DISCOUNTED AMOUNT IS  : %f",disc_amount);
	}
	
	else if (actual_amount<=1999){
		printf("NO DISCOUNT OFFER:");
	}
	
	saved_amount = actual_amount-disc_amount;
	
	printf("\n-----------------------------------\n");
	printf("\n YOUR SAVED AMOUNT IS %f:", saved_amount);
	printf("\n YOUR ACTUAL AMOUNT IS %f:", actual_amount);
	printf("\n YOUR DISCOUNTED AMOUNT IS %f:", disc_amount);
	
	return 0;
}
