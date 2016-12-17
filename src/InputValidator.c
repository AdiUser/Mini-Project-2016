/*
 * The function recieves a String type value and then performs on it
 * to check for any characters present in the formate.. is thier are only numerical
 * value present in the given String value the function returns 1 or else 0
 * */
#include "header.h"

int isInputValid(char testString[]){

    unsigned long newValue;
    char *ptr;

// strol(String, (pointer to first character), any number->[2,36])
    newValue = strtol(testString, &ptr, 10);

    if(*ptr ==NULL)
        return 1;

    else if(newValue <= 0)
        return 0;

    else
        return 0;


}
void showError(){
        freopen("CON","w",stdout);
        printf("\n\nNot Valid Input! :(\n\n");
    }
