#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void)
{
	int a,b,x;
	setbuf(stdout,NULL);
	printf("enter");
	scanf("%d %d",&a,&b);
	x=sum(a,b);
	printf("%d\t",x);
	x=sum(a,b);
	printf("%d\t",x);
	return 0;
}

int sum(int a, int b){
	int s;
	s=a+b;
	return s;
}
