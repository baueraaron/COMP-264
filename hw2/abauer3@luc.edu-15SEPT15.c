#include<stdio.h>
int main()
{
unsigned int i = 1;
char *c = (char*)&i;
if (*c)
	printf("Little");
else
	printf("Big");
getchar();
return 0;
}
