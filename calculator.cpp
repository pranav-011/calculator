#include<stdio.h>

main()
{
	int num1,num2,add,sub,mult,div,operete;
	
	printf(" enter 1 for addition \n enter 2 for subtraction \n enter 3 for multiplication \n enter 4 for division\n ");
	scanf("%d",&operete);
	if(operete == 1)
	{
	printf("enter any two number");
	scanf("%d %d",&num1,&num2);
	add = num1 + num2;
	printf("total is %d",add);
}
  else if(operete == 2)
  {
  	printf("enter any two number");
	scanf("%d %d",&num1,&num2);
	sub = num1 - num2;
	printf("total is %d",sub);
	  }	
	  else if(operete == 3)
  {
  	printf("enter any two number");
	scanf("%d %d",&num1,&num2);
	mult = num1 * num2;
	printf("total is %d",mult);
	  }	
	  else if(operete == 4)
  {
  	printf("enter any two number");
	scanf("%d %d",&num1,&num2);
	div = num1 / num2;
	printf("total is %d",div);
	  }	
}

