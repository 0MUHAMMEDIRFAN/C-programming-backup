
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,x,search;
	setbuf(stdout,NULL);
	printf("how many number you want to save ? = ");
	scanf("%d",&i);
	int a[i];
	printf("\nenter your %d numbers = ",i);
	for(x=0;x<i;x++)
	{
		scanf("%d",&a[x]);
	}
	printf("\n your numbers are saved.\n which number your searching? = ");
	scanf("%d",&search);
	printf("\n\t searching...");
	for(x=0;x<i;x++)
	{
		if(a[x]==search)
			break;
	}
	if(a[x]==search)
		{
		printf("\n\tyour number is placed the position %d ",x+1);

		}else
			printf("\n\t no result ");

	return EXIT_SUCCESS;
}
