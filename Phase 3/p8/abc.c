    #include <stdio.h>
    
    void swapByValue(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    
    void swapByReference(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    int main()
    {
        int x = 5, y = 10;
        printf("Before swapping (call by value): x = %d, y = %d\n", x, y);
        swapByValue(x, y);
        printf("After swapping (call by value): x = %d, y = %d\n", x, y);
    
        x = 5, y = 10;
        printf("Before swapping (call by reference): x = %d, y = %d\n", x, y);
        swapByReference(&x, &y);
        printf("After swapping (call by reference): x = %d, y = %d\n", x, y);
    
        return 0;
    }