#include<stdio.h>
struct student{
	unsigned char flag:1;
	
	
};

int main(){
	struct student s;
	s.flag=2;
	printf("%d",s.flag);
	//printf("%d",sizeof(struct student));
}