
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int b,a[4][3],x;
	setbuf(stdout,NULL);
	printf("give me numbrs\n");
	for(b=0;b<4;b++){
		for(x=0;x<3;x++){
		scanf("%d",&a[b][x]);
		printf("\t");
		}
		printf("\n");
	}
	for(b=0;b<4;b++){
			for(x=0;x<3;x++)
			{
			printf("\t %d ",a[b][x]);
			}
			printf("\n");
	}
	return EXIT_SUCCESS;
}
