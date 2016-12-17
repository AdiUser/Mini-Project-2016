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

void inputFile2(){

    char testCasesS[10], nums[10];
    long long int num;
    long testCases;
    FILE *ft = freopen("fileInput2.txt", "w", stdout);

        scanf("%s", &testCasesS);
        if(isInputValid(testCasesS))
            testCases = atoll(testCasesS);
        else{
            showError();
            return ;
        }
        printf("%d\n", testCases);

    while(testCases--){
        scanf("%s", &nums);

        if(isInputValid(nums))
            num = atoll(nums);
        else{
            showError();
            return ;
        }

        printf("%d\n", num);
    }
    // redirecting the output to the console screen!
    freopen("CON", "w" ,stdout);




}

