  #include <stdio.h>
  
  int main()
  {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int x, reverse = 0, tempo;
  
    for (x = 0; n != 0; x++)
    {
      tempo = n % 10;
      reverse = reverse * 10 + tempo;
      n = n / 10;
    }
  
    printf("Reversed number = %d", reverse);
  
    return 0;
  }