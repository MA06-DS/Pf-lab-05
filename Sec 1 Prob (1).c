#include<stdio.h>
int main(){
	int age;
printf("Enter age:");
scanf("%d",&age);


if(age>0){
	if(age<=13)
	   printf("Child");
	else if(age>=13 && age<18)
		printf("Teenager");
	else if(age>=18 && age<=59)
		printf("Adult");
	else
		printf("Senior");
}
return 0;
}