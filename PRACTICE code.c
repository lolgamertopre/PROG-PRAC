#include <stdio.h>
int main (){ 
    int score;
 printf ("enter an integer:");

 if (scanf("%d", &score)!= 1){
 printf ("INVALID GRADE");
 return 0;
 }
 if (score < 0){
    printf("invalid grade");
    return 0;
 }
 if (score >= 85 && score <= 100 ) printf ("A");
 else if (score >= 80 && score <= 84) printf ("B");
 else if (score >= 0 && score <= 79) printf ("F");

 else printf ("Invalid Grade");

 return 0;
}
