#include <stdio.h>

int mystrln(char array[]);
int strcmp(char array[],char array2[]);

int main(void){
    printf("Enter password:");
    char array[50],array2[50];
    gets(array);
    int strl =mystrln(array);
    printf("password registered!\n");
    printf("Password length : %d\n",strl);

    printf("Try login :\n");
    int try = 0 , cmpr_r;
    do {
        printf("Password:");
        gets(array2);
        cmpr_r = strcmp(array, array2);
        if (cmpr_r == 0) printf("TIME OUT(WRONG PASSWORD");
        else printf("LOGED IN");
    }while(try < 3 && cmpr_r != 1);
}

int mystrln(char array[50]){
    int counter = 0;
    for(int i = 0;array[i] != '\0';i++) {
        counter++;

    }
    return counter;
}

int strcmp(char array[50],char array2[50]){
    int T = 1;
    for(int i = 0;array[i] != '\0' || array2[i] != '\0';i++){
        if(array[i] != array2[i]) T = 0;
    }
    return T;
}
