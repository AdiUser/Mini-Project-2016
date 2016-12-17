

#include <stdio.h>

#include<string.h>

void checkFileSysytem(){
int num = 0 ;
setbuf(stdout, NULL);

FILE *ft = freopen("input", "r", stdin);
if(!ft)
	printf("No file found");
scanf("%d", &num);
printf("The number is : %d", num);


	}
