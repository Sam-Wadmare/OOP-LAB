#include<stdio.h>
#include<stdlib.h>
int main(){
	void *v=malloc(4);
	char *c;
	c=(char*)v;
	c[0]='a';
	c[1]='b';
	printf("%c",c[0]);
	printf("%c",c[1]);
	
	printf("%d",c[0]);

	int i[2];
	char *c;
	c=i;

	malloc(2*4)
	int i[2]
	calloc(2,4)
}

