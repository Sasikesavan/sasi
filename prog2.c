#include <stdio.h>
#include<conio.h>
main()
{    
int number[]={31,14,15,7,2};;
int i, j, a, n;

for (i = 0; i < 4; ++i)
   {
   for (j = i + 1; j < 4; ++j)
   {
         if (number[i] < number[j])
            {
            a = number[i];
    number[i] = number[j];
    number[j] = a;
}
}
}
    printf("The numbers arranged in descending order are given below\n");
    for (i = 0; i < 4; ++i)
    {
        printf("%d\n", number[i]);
    }
    }
