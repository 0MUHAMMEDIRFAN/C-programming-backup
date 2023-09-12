#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,x,b;
	setbuf(stdout,NULL);
	printf("enter limit = ");
	scanf("%d",&i);
	int a[i],y;
	setbuf(stdout,NULL);
	printf("\n enter %d numbers = ",i);
	for(x=0;x<i;x++)
		scanf("%d",&a[x]);
	printf("\n sorting...\n");
	for(y=0;y<i;y++)
	{
		for(x=0;x<i;x++)
		{
			if(a[y]>a[x])
			{
				b=a[y];
				a[y]=a[x];
				a[x]=b;
			}
		}
	}
	for(b=0;b<i;b++)
	{
		printf("%d\n",a[b]);
	}
	return EXIT_SUCCESS;
}
