//programe: to calculate a student marks
//name:gollapali kasi venkata naga karthik
//date: 23/09/2026
#include<stdio.h>
int main()
{
int english, phisics, maths, biology, chemistry;
printf("To calculate student total marks, average marks and percentages given below\n");
printf("Enter student english marks:\n"); //tadhsfhjaefnk
scanf("%d", &english);
printf("Enter student phisics marks:\n");
scanf("%d", &phisics);
printf("Enter student maths marks:\n");
scanf("%d",&maths);
printf("Enter student biology marks:\n");
scanf("%d", &biology);
printf("Enter student chemistry marks:\n");
scanf("%d",&chemistry);

int total=english+phisics+maths+biology+chemistry;
printf("Out of total 500 marks a studenty secured grand total of: %d\n", total);

float percentage=(total/500.0)*100;
printf("The percentage secured by a student is: %.2f\n", percentage);

float average = total / 5.0;
printf("The average marks secured by a student per subject is: %.2f\n", average);

return 0;
}
