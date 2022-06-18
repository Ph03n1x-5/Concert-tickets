//Concert Tickets
#include<stdio.h>
int main(void)
{
	int i = 1;
	int age;
	while(i <=3)
	{
		printf("Enter the age of person");
		scanf("%d", &age);
		if(age <=12)
		printf("The price of the ticket is $10\n");
		else if(age >=65)
		printf("The price of the ticket is $8\n");
		else
		printf("The price of the ticket is $20\n");
		i +=1;	
	}
	return 0;
}
