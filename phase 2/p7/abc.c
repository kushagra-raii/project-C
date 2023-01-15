  #include <stdio.h>
  #include <string.h>
  
  int main()
  {
      char str[1000], rev[1000];
      int i, count = 0;
  
      printf("Enter a string: ");
      scanf("%s", str);
      printf("\nOriginal string: %s", str);
  
      // finding the length of the string
      count = strlen(str);
  
      // reversing the string
      for (i = 0; i < count; i++)
      {
          rev[i] = str[count-i-1];
      }
      rev[i] = '\0';
  
      printf("\nReversed string: %s", rev);
  
      return 0;
  }
