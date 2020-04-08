/*
 ============================================================================
 Name        : ifd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,i,i2;
	char y;
	scanf("%d",&x);
	for (i=x;i>=1;i--){
		for (i2=1,y='A';i2<=i;i2++,y++){
			printf("%c",y);
		}
		printf("\n");
	}
	return 0;
}

