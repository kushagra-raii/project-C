#include<stdio.h>
int main()
{
    // float sub1 , sub2, sub3, sub4, sub5; //declarations of variables
    // printf("\n Enter the Marks of subject1 ");
    // scanf("%f", &sub1);
    // printf("\n Enter the Marks of subject2 ");
    // scanf("%f", &sub2);
    // printf("\n Enter the Marks of subject3 ");
    // scanf("%f", &sub3);
    // printf("\n Enter the Marks of subject4 ");
    // scanf("%f", &sub4);
    // printf("\n Enter the Marks of subject5 ");
    // scanf("%f", &sub5);
    // float marks = (sub1 + sub2 + +sub4 + sub3 + sub5)/5;
    // printf("Your percentage : %f \n",marks);
    // if (marks>90){
    //         printf("Your grade is A+");
    //     } else if (marks > 80) {
    //         printf("Your grade is A");
    //     }else if (marks > 70) {
    //         printf("Your grade is B+");
    //     }else if (marks > 60) {
    //         printf("Your grade is B");
    //     }else if (marks > 50) {
    //         printf("Your grade is C");
    //     }else if (marks > 40) {
    //         printf("Your grade is D");
    //     }else if (marks > 30) {
    //        printf("Your grade is E");
    //     }else {
    //         printf("Your grade is F");
    //     }
    int n=5,i,j,k;
    for ( i = n; i >= 1; i--)
    {
        for ( j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for ( k = 1; k!=2*i-1 ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
