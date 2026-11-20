#include <stdio.h>
#include <string.h>

void swap(char **p1, char **p2){
    char *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{   
    char s1[100], s2[100], s3[100];
    char *p[3] = {s1, s2, s3}; 

    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);

    if (strcmp(p[0], p[1]) > 0) swap(&p[0], &p[1]);
    if (strcmp(p[0], p[2]) > 0) swap(&p[0], &p[2]);
    if (strcmp(p[1], p[2]) > 0) swap(&p[1], &p[2]);

    printf("%s\n%s\n%s\n", p[0], p[1], p[2]);

    return 0;
}