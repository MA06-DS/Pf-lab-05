#include <stdio.h>
int main(){
	int no;
printf("Enter number:");
scanf("%d",&no);
if(no>0){
	printf("Number is positive.\n");
	if(no%2==0)
	printf("Number is even.");
	else
	printf("Number is odd.");
}
else if(no==0)
	printf("Number is zero.");
else
	printf("Number is negative.");
}