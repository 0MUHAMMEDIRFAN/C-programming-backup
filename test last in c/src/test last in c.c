#include <stdio.h>
#include <stdlib.h>
int getarray();
void displayarray();
int main(void) {
	int b=7,a[5]={5,4,2,1,3};
	setbuf(stdout,NULL);
	a[5]=getarray(a);
	displayarray(a);
	return EXIT_SUCCESS;
}

int getarray(int a[5]){
	setbuf(stdout,NULL);
	printf("enter the values");

	return a[5];
}

void displayarray(int a[5]){
	int x;
	for(x=0;x<5;x++)
		printf("\n%d ",a[x]);
	return;
}
