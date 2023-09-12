

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sum,i,b;
	setbuf(stdout,NULL);
	printf("\n\t HOW MANY nuMbeRS YOU are calculating : ");
	scanf("%d",&b);
	int a[b];
	setbuf(stdout,NULL);
	printf("\n\tenter your %d numbers : ",b);
	for(i=0;i<b;i++)
		{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		};
	printf("\n\tsum is ,%d",sum);
	return EXIT_SUCCESS;
}
