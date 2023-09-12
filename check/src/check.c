
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2,sum,ans;
	setbuf(stdout,NULL);
	printf("\n\t ENTER TWO NUMBERS : ");
	scanf("%d%d",&num1,&num2);
	sum=num1%num2;
	printf("\n\tremains = %d",sum);
	ans=num1/num2;
	printf("\n\tDivison is = %d",ans);
	if(num1<num2)
		sum=ans*num1;
		else
			sum=ans*num2;
	printf("\n\t last answer = %d",sum);
	return EXIT_SUCCESS;
}
