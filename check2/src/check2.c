
#include <stdio.h>
#include <stdlib.h>

int main(void) {
		int num1,num2;
		setbuf(stdout,NULL);
		printf("\n\tENTER 1st number : ");
		scanf("%d",&num1);
		printf("\n\tENTER 2nd number : ");
		scanf("%d",&num2);
		num2=num2+num1;
		num1=num2+num1;
		num2=num1-num2;
		num1=num1-num2-num2;
		printf("\n\t1st NUMBER IS = %d",num1);
		printf("\n\t2nd NUMBER IS = %d",num2);
		return EXIT_SUCCESS;
}
