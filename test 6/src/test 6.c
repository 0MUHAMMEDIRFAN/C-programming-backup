#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	return 0;
}

/*{

	int r;
	setbuf(stdout,NULL);
	printf("enter the size of array");
	scanf("%d",&r);
	int a[r][r],b[r][r],i,x;
	printf("enter the values of 1st array");
	for(x=0;x<r;x++)
	{
		for(i=0;i<r;i++)
			scanf("%d",&a[x][i]);
	}
	printf("enter the values of 2nd array");
	for(x=0;x<r;x++)
		{
			for(i=0;i<r;i++)
			{
				scanf("%d",&b[x][i]);
				a[x][i]=a[x][i]+b[x][i];

			}

		}
	for(x=0;x<r;x++)
		{
			for(i=0;i<r;i++)
				printf("%d ",a[x][i]);
			printf("\n");
		}

	return 0;
}


int ex1(){
	char a[20];
	int r,x,i=0;
	setbuf(stdout,NULL);
	printf("\nenter string");
	scanf("%s",a);
	r=strlen(a);
	for(x=0;x<r;x++)
	{
		if(a[x]==a[r-x-1])
			i=1;
	}
	if(i==1)
		printf("\n this string is palindrome");
	else
		printf("\n this string is not palindrome");
		return 0;
}














int error(){
	int x,z,c=0,spell;
	setbuf(stdout,NULL);
	puts("enter the number of spelling in your string");
	scanf("%d",&spell);
	spell++;
	char b[spell],a[spell];
	setbuf(stdout,NULL);
	puts("\n\t enter a string");
	for(x=0;x<spell;x++)
	{
		scanf("%c",&a[x]);
	}
	for(x=spell-1;x>=0;x--)
		{
			for(z=c;z<c+1;z++)
			{
				b[z]=a[x];
			}c=c+1;
		}
	if(a==b)
	{
	printf("\nentered string is palindrome");
	}else
		printf("\nsorry.tis string is not palindrome");
	printf("\n%s \t %s",a,b);
	return EXIT_SUCCESS;
}
*/
