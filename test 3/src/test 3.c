#include <stdio.h>
#include <stdlib.h>
int a();
int main(void){
	int x,y,a,b;
	setbuf(stdout,NULL);
	printf("how many rows and columns you need? \n what is the difference between the numbers");
	scanf("%d%d",&a,&b);
	for(x=1;x<=a;x=x++)
	{
		printf("\n");
		for(y=1;y<=x*b;y=y+b)
			printf(" %d",y);
	}

}


	int a(){
	int a,x,sum=0;
	setbuf(stdout,NULL);
	puts("\n \t give me a limit");
	scanf("%d",&a);
	for(x=1;x<=a;x=x+2)
	{
		sum=sum+x;

	}
	printf("\n\t sm of odd number = %d",sum);
	return EXIT_SUCCESS;
}
