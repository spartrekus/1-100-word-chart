


////////////////////////////////////////
////////////////////////////////////////
////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include <ctype.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h> 
#include <time.h>






/////////////////////////////////
/////////////////////////////////







char *inttonbr( int mynbr ) 
{
  char charout[PATH_MAX];
  char charo[PATH_MAX];

    if ( mynbr == 0   ) strncpy( charout, "zero", PATH_MAX );
    else if ( mynbr == 1	   ) strncpy( charout, "one", PATH_MAX );
    else if ( mynbr == 2	   ) strncpy( charout, "two", PATH_MAX );
    else if ( mynbr == 3	   ) strncpy( charout, "three", PATH_MAX );
    else if ( mynbr == 4	   ) strncpy( charout, "four", PATH_MAX );
    else if ( mynbr == 5	   ) strncpy( charout, "five", PATH_MAX );
    else if ( mynbr == 6	   ) strncpy( charout, "six", PATH_MAX );
    else if ( mynbr == 7	   ) strncpy( charout, "seven", PATH_MAX );
    else if ( mynbr == 8	   ) strncpy( charout, "eight", PATH_MAX );
    else if ( mynbr == 9	   ) strncpy( charout, "nine", PATH_MAX );
    else if ( mynbr == 10	   ) strncpy( charout, "ten", PATH_MAX );
    else if ( mynbr == 11	   ) strncpy( charout, "eleven", PATH_MAX );
    else if ( mynbr == 12	   ) strncpy( charout, "twelve", PATH_MAX );
    else if ( mynbr == 13	   ) strncpy( charout, "thirteen", PATH_MAX );
    else if ( mynbr == 14	   ) strncpy( charout, "fourteen", PATH_MAX );
    else if ( mynbr == 15	   ) strncpy( charout, "fifteen", PATH_MAX );
    else if ( mynbr == 16	   ) strncpy( charout, "sixteen", PATH_MAX );
    else if ( mynbr == 17	   ) strncpy( charout, "seventeen", PATH_MAX );
    else if ( mynbr == 18	   ) strncpy( charout, "eighteen", PATH_MAX );
    else if ( mynbr == 19	   ) strncpy( charout, "nineteen", PATH_MAX );
    else if ( mynbr == 20	   ) strncpy( charout, "twenty", PATH_MAX );
    else if ( mynbr == 21	   ) strncpy( charout, "twenty-one", PATH_MAX );
    else if ( mynbr == 22	   ) strncpy( charout, "twenty-two", PATH_MAX );
    else if ( mynbr == 23	   ) strncpy( charout, "twenty-three", PATH_MAX );
    else if ( mynbr == 24	   ) strncpy( charout, "twenty-four", PATH_MAX );
    else if ( mynbr == 25	   ) strncpy( charout, "twenty-five", PATH_MAX );
    else if ( mynbr == 26	   ) strncpy( charout, "twenty-six", PATH_MAX );
    else if ( mynbr == 27	   ) strncpy( charout, "twenty-seven", PATH_MAX );
    else if ( mynbr == 28	   ) strncpy( charout, "twenty-eight", PATH_MAX );
    else if ( mynbr == 29	   ) strncpy( charout, "twenty-nine", PATH_MAX );
    else if ( mynbr == 30	   ) strncpy( charout, "thirty", PATH_MAX );
    else if ( mynbr == 31	   ) strncpy( charout, "thirty-one", PATH_MAX );
    else if ( mynbr == 32	   ) strncpy( charout, "thirty-two", PATH_MAX );
    else if ( mynbr == 33	   ) strncpy( charout, "thirty-three", PATH_MAX );
    else if ( mynbr == 34	   ) strncpy( charout, "thirty-four", PATH_MAX );
    else if ( mynbr == 35	   ) strncpy( charout, "thirty-five", PATH_MAX );
    else if ( mynbr == 36	   ) strncpy( charout, "thirty-six", PATH_MAX );
    else if ( mynbr == 37	   ) strncpy( charout, "thirty-seven", PATH_MAX );
    else if ( mynbr == 38	   ) strncpy( charout, "thirty-eight", PATH_MAX );
    else if ( mynbr == 39	   ) strncpy( charout, "thirty-nine", PATH_MAX );
    else if ( mynbr == 40	   ) strncpy( charout, "forty", PATH_MAX );
    else if ( mynbr == 41	   ) strncpy( charout, "forty-one", PATH_MAX );
    else if ( mynbr == 42	   ) strncpy( charout, "forty-two", PATH_MAX );
    else if ( mynbr == 43	   ) strncpy( charout, "forty-three", PATH_MAX );
    else if ( mynbr == 44	   ) strncpy( charout, "forty-four", PATH_MAX );
    else if ( mynbr == 45	   ) strncpy( charout, "forty-five", PATH_MAX );
    else if ( mynbr == 46	   ) strncpy( charout, "forty-six", PATH_MAX );
    else if ( mynbr == 47	   ) strncpy( charout, "forty-seven", PATH_MAX );
    else if ( mynbr == 48	   ) strncpy( charout, "forty-eight", PATH_MAX );
    else if ( mynbr == 49	   ) strncpy( charout, "forty-nine", PATH_MAX );
    else if ( mynbr == 50	   ) strncpy( charout, "fifty", PATH_MAX );
    else if ( mynbr == 51	   ) strncpy( charout, "fifty-one", PATH_MAX );
    else if ( mynbr == 52	   ) strncpy( charout, "fifty-two", PATH_MAX );
    else if ( mynbr == 53	   ) strncpy( charout, "fifty-three", PATH_MAX );
    else if ( mynbr == 54	   ) strncpy( charout, "fifty-four", PATH_MAX );
    else if ( mynbr == 55	   ) strncpy( charout, "fifty-five", PATH_MAX );
    else if ( mynbr == 56	   ) strncpy( charout, "fifty-six", PATH_MAX );
    else if ( mynbr == 57	   ) strncpy( charout, "fifty-seven", PATH_MAX );
    else if ( mynbr == 58	   ) strncpy( charout, "fifty-eight", PATH_MAX );
    else if ( mynbr == 59	   ) strncpy( charout, "fifty-nine", PATH_MAX );
    else if ( mynbr == 60	   ) strncpy( charout, "sixty", PATH_MAX );
    else if ( mynbr == 61	   ) strncpy( charout, "sixty-one", PATH_MAX );
    else if ( mynbr == 62	   ) strncpy( charout, "sixty-two", PATH_MAX );
    else if ( mynbr == 63	   ) strncpy( charout, "sixty-three", PATH_MAX );
    else if ( mynbr == 64	   ) strncpy( charout, "sixty-four", PATH_MAX );
    else if ( mynbr == 65	   ) strncpy( charout, "sixty-five", PATH_MAX );
    else if ( mynbr == 66	   ) strncpy( charout, "sixty-six", PATH_MAX );
    else if ( mynbr == 67	   ) strncpy( charout, "sixty-seven", PATH_MAX );
    else if ( mynbr == 68	   ) strncpy( charout, "sixty-eight", PATH_MAX );
    else if ( mynbr == 69	   ) strncpy( charout, "sixty-nine", PATH_MAX );
    else if ( mynbr == 70	   ) strncpy( charout, "seventy", PATH_MAX );
    else if ( mynbr == 71	   ) strncpy( charout, "seventy-one", PATH_MAX );
    else if ( mynbr == 72	   ) strncpy( charout, "seventy-two", PATH_MAX );
    else if ( mynbr == 73	   ) strncpy( charout, "seventy-three", PATH_MAX );
    else if ( mynbr == 74	   ) strncpy( charout, "seventy-four", PATH_MAX );
    else if ( mynbr == 75	   ) strncpy( charout, "seventy-five", PATH_MAX );
    else if ( mynbr == 76	   ) strncpy( charout, "seventy-six", PATH_MAX );
    else if ( mynbr == 77	   ) strncpy( charout, "seventy-seven", PATH_MAX );
    else if ( mynbr == 78	   ) strncpy( charout, "seventy-eight", PATH_MAX );
    else if ( mynbr == 79	   ) strncpy( charout, "seventy-nine", PATH_MAX );
    else if ( mynbr == 80	   ) strncpy( charout, "eighty", PATH_MAX );
    else if ( mynbr == 81	   ) strncpy( charout, "eighty-one", PATH_MAX );
    else if ( mynbr == 82	   ) strncpy( charout, "eighty-two", PATH_MAX );
    else if ( mynbr == 83	   ) strncpy( charout, "eighty-three", PATH_MAX );
    else if ( mynbr == 84	   ) strncpy( charout, "eighty-four", PATH_MAX );
    else if ( mynbr == 85	   ) strncpy( charout, "eighty-five", PATH_MAX );
    else if ( mynbr == 86	   ) strncpy( charout, "eighty-six", PATH_MAX );
    else if ( mynbr == 87	   ) strncpy( charout, "eighty-seven", PATH_MAX );
    else if ( mynbr == 88	   ) strncpy( charout, "eighty-eight", PATH_MAX );
    else if ( mynbr == 89	   ) strncpy( charout, "eighty-nine", PATH_MAX );
    else if ( mynbr == 90	   ) strncpy( charout, "ninety", PATH_MAX );
    else if ( mynbr == 91	   ) strncpy( charout, "ninety-one", PATH_MAX );
    else if ( mynbr == 92	   ) strncpy( charout, "ninety-two", PATH_MAX );
    else if ( mynbr == 93	   ) strncpy( charout, "ninety-three", PATH_MAX );
    else if ( mynbr == 94	   ) strncpy( charout, "ninety-four", PATH_MAX );
    else if ( mynbr == 95	   ) strncpy( charout, "ninety-five", PATH_MAX );
    else if ( mynbr == 96	   ) strncpy( charout, "ninety-six", PATH_MAX );
    else if ( mynbr == 97	   ) strncpy( charout, "ninety-seven", PATH_MAX );
    else if ( mynbr == 98	   ) strncpy( charout, "ninety-eight", PATH_MAX );
    else if ( mynbr == 99	   ) strncpy( charout, "ninety-nine", PATH_MAX );
    else if ( mynbr == 100	   ) strncpy( charout, "one hundred", PATH_MAX );

    strncpy( charo , charout, PATH_MAX );
    size_t siz = sizeof charo ; 
    char *r = malloc( sizeof charo );
    return r ? memcpy(r, charo, siz ) : NULL;
}


////////////
int main()
{
   //|| 1	one;11	eleven;21	twenty-one;31	thirty-one;41	forty-one
   //printf( "%s\n", inttonbr( 1 ));
   int j, i ; 

   for ( i = 1 ; i <= 9 ; i++)
   {
      printf( "|| ");
      printf( "%d;" , i);
      printf( "%s", inttonbr( i ));
      printf( "%c", 9 );
      printf( "%d;" , 10+i );
      printf( "%s", inttonbr( 10+i ));
      printf( "%c", 9 );
      printf( "%d;" , 20+i);
      printf( "%s", inttonbr( 20+i ));
      printf( "%c", 9 );
      printf( "%d;" , 30+i);
      printf( "%s", inttonbr( 30+i ));
      printf( "%c", 9 );
      printf( "%d;" , 40+i);
      printf( "%s", inttonbr( 40+i));
      printf( "\n" );
    }

   for ( i = 10 ; i <= 10 ; i++)
   {
      printf( "|| ");
      printf( "%d;" , i);
      printf( "%s", inttonbr( i ));
      printf( "%c", 9 );
      printf( "%d;" , 10+i );
      printf( "%s", inttonbr( 10+i ));
      printf( "%c", 9 );
      printf( "%d;" , 20+i);
      printf( "%s", inttonbr( 20+i ));
      printf( "%c", 9 );
      printf( "%d;" , 30+i);
      printf( "%s", inttonbr( 30+i ));
      printf( "%c", 9 );
      printf( "%d;" , 40+i);
      printf( "%s", inttonbr( 40+i));
      printf( "\n" );
   }


   for ( i = 50 ; i <= 59 ; i++)
   {
      printf( "|| ");
      printf( "%d;" , i);
      printf( "%s", inttonbr( i ));
      printf( "%c", 9 );
      printf( "%d;" , 10+i );
      printf( "%s", inttonbr( 10+i ));
      printf( "%c", 9 );
      printf( "%d;" , 20+i);
      printf( "%s", inttonbr( 20+i ));
      printf( "%c", 9 );
      printf( "%d;" , 30+i);
      printf( "%s", inttonbr( 30+i ));
      printf( "%c", 9 );
      printf( "%d;" , 40+i);
      printf( "%s", inttonbr( 40+i));
      printf( "\n" );
    }

   for ( i = 60 ; i <= 60 ; i++)
   {
      printf( "|| ");
      printf( "%d;" , i);
      printf( "%s", inttonbr( i ));
      printf( "%c", 9 );
      printf( "%d;" , 10+i );
      printf( "%s", inttonbr( 10+i ));
      printf( "%c", 9 );
      printf( "%d;" , 20+i);
      printf( "%s", inttonbr( 20+i ));
      printf( "%c", 9 );
      printf( "%d;" , 30+i);
      printf( "%s", inttonbr( 30+i ));
      printf( "%c", 9 );
      printf( "%d;" , 40+i);
      printf( "%s", inttonbr( 40+i));
      printf( "\n" );
   }



    return 0;

}


