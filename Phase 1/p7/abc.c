#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3)  // if n1 is greater than both n2 and n3, n1 is the largest
    {
        printf("No.1 is the largest number.");
    }
    else if (n2 > n3)
    {
        printf("No.2 is the largest number.");
    }
    else if (n1 == n2 && n1 > n3)
    {
        printf("No.1 and No.2 are equal and largest number.");
    }
    else if (n3 == n2 && n2 > n1)
    {
        printf("No.1 and No.2 are equal and largest number.", n2,n3);
    }
    else if (n3 == n1 && n3 > n2)
    {
        printf("No.1 and No.3 are equal and largest number.", n2,n3);
    }
    else
    {
        printf("No.3 is the largest number.");
    }
    
    
    
    return 0;
}