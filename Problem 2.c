#include <stdio.h>
int main(){
	int att,attper;
	float exam,assign,examm,assignm,total;
printf("Enter Marks achieved out of 100:");
scanf("%f",&exam);
printf("Enter Days you were present out of 45:");
scanf("%d",&att);
printf("Enter Assignments marks out of 200:");\
scanf("%f",&assign);
if(assign<=200&& att<=45 && exam<=100){
	assignm=assign*0.25;
	examm=exam*0.5;
	attper=att*100/45;
	total=examm+attper;
if(att>=75 && total<=100){
	if(total<=100 && total>=80)
		printf("Grade A+.");
	else if(total<80 && total>=70)
		printf("Grade A.");
	else if(total<70 && total>=60)
		printf("Grade B.");
	else if(total<60 && total>=50)
		printf("Grade C.");
	else
		printf("FAIL.");
}
else
	printf("Course is on hold due to Attendence.");	
}
}