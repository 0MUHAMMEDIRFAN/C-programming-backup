#include <stdio.h>
#include <stdlib.h>
int ex1();
int ex2();
int main(void)
{
	int r;
	setbuf(stdout,NULL);
	printf("enter size ");
	scanf("%d",&r);
	int a[r],x,z,i;
	printf("\nenter values = ");
	for(x=0;x<r;x++)
		scanf("%d",&a[x]);
	for(x=0;x<r;x++){
		for(i=x+1;i<r;i++)
		{
			if(a[i]>a[x])
			{
				z=a[i];
				a[i]=a[x];
				a[x]=z;
			}
		}
		printf("%d ",a[x]);
	}
	return 0;
}



int ex2(){
	int x,r,z=0;
	setbuf(stdout,NULL);
	printf("\n\t enter your size of array");
	scanf("%d",&r);
	int a[r];
	printf("\n\t enter the values of array");
	for(x=0;x<r;x++)
	{
		scanf("%d",&a[x]);
		if(a[x]%2==0)
			z++;
	}
	printf("\n\t number of even numbers in the given nubers = %d",z);
			return 0;
}





int ex1()
{
	int a,x,z;
	setbuf(stdout,NULL);
	printf("\n\t enter the size of arrays = ");
	scanf("%d",&a);
	int array1[a],array2[a];
	printf("enter the values of array 1 = ");
	for(x=0;x<a;x++)
	{
		scanf("%d",&array1[x]);
	}
	printf("enter the values of array 2 = ");
	for(x=0;x<a;x++)
		{
			scanf("%d",&array2[x]);
		}
	for(x=0;x<a;x++)
	{
		z=array1[x];
		array1[x]=array2[x];
		array2[x]=z;

	}
	for(x=0;x<a;x++)
		{
			printf("%d  ",array1[x]);
		}
	printf("\n");
	for(x=0;x<a;x++)
			{
				printf("%d  ",array2[x]);
			}
	return EXIT_SUCCESS;
}
