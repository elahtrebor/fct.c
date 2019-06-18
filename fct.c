/* fct.c - Print data fields delimited by string...  */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define FIELDSTART 0   /* output like PERL set to 1 if desired for Awk like*/


        int count = FIELDSTART + 0;


main(int argc, char * argv[])
{


 int i = 0;


   if(argc < 2){printf("Not enough arguments...\n");
            puts("Usage: fields \"<delimiter>\" \"<string>\"\n");

      exit(0);
   }

  if(strstr(argv[1],"-h")){
            puts("Usage: fields \"<delimiter>\" \"<string>\"\n");

     exit(0);
  }

 /* iterate through the arguments  */



 while (i != EOF) {

        i = getchar();

          if(i == argv[1][0]) {

                             printf("[%d]",count);

                             count++;
          }


          if ( i == '\n' ){count = 0;}

        printf("%c", i);


}

}

