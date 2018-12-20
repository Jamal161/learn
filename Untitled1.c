#include<stdio.h>
#include<conio.h>

 void main()
 {

        char str[40];
         char blank[500];
   int c = 0, d = 0;
        int j, i,count=0;

        printf("\nEnter any string : ");
        gets(str);

        for(i=0;str[i];i++)
               if(str[i] == ' ')
                     count++;

        printf("%d\n",count);

 while (str[c] != '\0') {
      if (str[c] == ' ') {
         int temp = c + 1;
         if (str[temp] != '\0') {
            while (str[temp] == ' ' && str[temp] != '\0') {
               if (str[temp] == ' ') {
                  c++;
               }
               temp++;
            }
         }
      }
      blank[d] = str[c];
      c++;
      d++;
   }

   blank[d] = '\0';

   printf(blank);

   return 0;
}
