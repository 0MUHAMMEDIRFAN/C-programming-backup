#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p,r,n,si;
	setbuf(stdout,NULL);
	scanf("%d%d%d",&p,&r,&n,&si);
	si=(p*r*n)/100;
	printf("%d",si);
	return EXIT_SUCCESS;
}
