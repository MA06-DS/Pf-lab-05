#include <stdio.h>
int main(){
	int age,cship;
printf("Enter age:");
scanf("%d",&age);
printf("Enter citizenship (1 for Pakistani) && (0 for other):");
scanf("%d",&cship);
if(cship==1 || cship==0 && age>0){
	if (age>=18 && cship==1)
	printf("Eligible for vote");
	else
	printf("Not Eligible for vote.");
}
}