#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= 7; j++) {
            if ((j==1||j==7)||(i==5&&j==2)||(i==4&&j==3)||(i==3&&j==4)||(i==4&&j==5)||(i==5&&j==6)||(i==6&&j==7) )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
