#include <stdio.h>
int main(){
	int sum,no;
	printf("Enter a number:");
	scanf("%d",&no);
if(no==0)
	printf("Sum of digit is 0.");
else if(no%9==0)
	printf("Sum of digit is 9.");
else
	sum = no%9;
	printf("Sum of digit is %d.",sum);
}