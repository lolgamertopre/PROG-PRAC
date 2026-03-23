#include <stdio.h>
int main (){ 
    int score;
    printf ("Enter an integer: ");      

    if (scanf ("%d", &score) != 1) {
        printf ("invalid Grade");
        return 0;   
    }
    if (score < 0) {
        printf ("invalid Grade");
        return 0;   
    }
    if (score >= 85 && score <= 100) printf ("A");
    else if (score >= 80 && score <= 84) printf ("B");
    else if (score >= 0 && score <= 79) printf ("F");
    else printf ("invalid Grade");          
    return 0;
}