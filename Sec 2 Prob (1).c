#include <stdio.h>
int main(){
	int no;
printf("Enter Number:");
scanf("%d",&no);
if(no%3==0 && no%5==0)
printf("%d is divisible by both 3 and 5",no);
else
printf("%d is not divisible by 3 and 5",no);
}