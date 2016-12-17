
/* IF a valid file is found then this function is called from the main.c file
 * the function is named after a japenese word "eeke" whose English
 * translation is "go"! :)
 */
#include "header.h"
void eeke(char *file){

    int i, ch;

 /*--Using the aid of Menu for simpler User Experience-- */
for(i=0;i<=10;i++)
        printf("=");
        printf("Welcome to the Mini-Project 2016");
       for(i=0;i<=10;i++)
            printf("=");
            printf("\n\n");

       printf(" Please select your choice to start \n\n");
       printf("\n 1--> Prime Probability Counter! \n\n 2--> Lucky Number Quest!\n\n 3--> Exit \n\n");
       printf(" Your Choice Here : ");
       scanf("%d", &ch);
       switch(ch){

       /*
        * Note the "//" commented lines. The function mentioned in those can
        * be used to input the "Inputfile" content manually! It would be nice if some
        * one needs to do that on their own. Also dont forget to use validations in the \
        * newly unlocked fuction.
        */

       case 1:
    printf("\n Counting Probability... \n\n");

    //check = inputFile();
    //if(check!=0)
    secQuest(file);
    break;

   case 2:
    printf("\n Operating for Lucky numbers...\n\n");

    //check = inputFile2();
    //if(check !=0)
    thirdQuest(file);
    break;

   case 3:
    printf("\n Exiting program...\n\n");
    exit(0);
    break;

   default :
    printf("\n\n **ERROR 1053: INVALID CHOICE** \n\n");

       }


}
