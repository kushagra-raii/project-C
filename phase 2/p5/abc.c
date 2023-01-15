    #include <stdio.h>
    #include <conio.h>

    int main()
    {
        int a[50], i, n, number;

        printf("Enter size of the  array : ");
        scanf("%d", &n);
        printf("Enter elements in array : ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter the number: ");
        scanf("%d", &number);
        

        for (i = 0; i < n; i++)
        {
            if (a[i] == number)
            {
                printf("element found ");
                return 0;
            }
        }

        printf("element  not  found");
    }