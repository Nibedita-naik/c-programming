#include<stdio.h>
int main(){
	int principal, time;
	float rate, SI;
	
	
	puts("Principal amount:\n");
	scanf("%d", &principal);
	printf("Time:\n");
	scanf("%d", &time);
	printf("Rate of interest:\n");
	scanf("%f", &rate);
	SI = principal*time*rate/100;
	printf("The Interest is: %f ", SI);
	printf("\nTotal Amount:%f", SI+principal);

	
	return 0;
}