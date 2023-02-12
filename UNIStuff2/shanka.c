#include<stdio.h>
int main(){ 
int std_mrk; // The mark of the student.
printf("Enter the Mark of the Student = ");
scanf("%d" ,&std_mrk);
if (std_mrk<50){
printf("Your grade is F\n");
}
else if (std_mrk>=50 && std_mrk<60){
printf("your grade is D\n");
}
else if(std_mrk>=60 && std_mrk<70){
printf("Your grade is C\n");
}
else if(std_mrk>=70 && std_mrk<80){
printf("Your grade is B\n");
}
else if(std_mrk>=80 && std_mrk<90){
printf("Your grade is A\n");
}
else if(std_mrk>=90){
printf("Your grade is A\n+");
}
return 0;
}