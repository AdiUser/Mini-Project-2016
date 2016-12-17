/*
 * Modification file for the Extra unlockable function :)
 * happy unlocking in the eeke.c file
 * */

/*
 * The funtion saves the data entered by the user at the run time
 * into the file system, speciallity about the entered data is that it is
 * validated first and then saved.
 * */

#include "header.h"

int inputFile(void){

     long testCases;

    long long int leftLim, rightLim;
    char newVal[10], leftLims[10], rightLims[10];

    FILE *ftpp = freopen("fileInput1.txt", "w", stdout);

        scanf("%s", &newVal);

        if(isInputValid(newVal))
        	// the atoi(Sring) fuction helps in converting
        	// String value into int value.
            testCases = atoi(newVal);
        else{
            showError();
            return 0;
        }

        printf("%lu\n", testCases);

        while(testCases--){
           scanf("%s", &leftLims);

           if(isInputValid(leftLims))
            leftLim = atoll(leftLims);
           else{
            showError();
            return 0;
           }

           scanf("%s", &rightLims);

            if(isInputValid(rightLims))
                leftLim = atoll(rightLims);
           else{
                showError();
                return 0;
           }

           printf("%ld ", leftLim);
           printf("%ld", rightLim);
           printf("\n");
    }
   // redirecting the output to the console screen!
   freopen("CON","w",stdout);
   return 1;


}
