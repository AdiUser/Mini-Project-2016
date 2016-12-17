/*main function for module 2.
 * Check for a LUCKY number and then calculate it's
 * max. difference and total sum a/c digits!
 */
#include "header.h"

// returns maximum diffrence b/t the digits of LUCKY number.
int getMaxDiff(int num){

    int lastDig, prevDig, maxDiff =0, diff;

    while(num!=0){
        lastDig = num%10;
        num /=10;
        prevDig = num%10;
        diff = lastDig - prevDig;

        if(diff> maxDiff)
        maxDiff = diff;

        }
    return maxDiff;
}
// returns total sum of the LUCKY number.
int getSum(int num){

    int rem, sum = 0;

    while(num!=0){
        rem = num%10;
        num /=10;
        sum +=rem;
    }
    return sum;
}

int thirdQuest(char *fileName){

int num, numClone, testCases, prevDig, lastDig;
int maxDiff =0, i, diff, breakerCount =0;
char testCasesS[10], numS[10];
FILE *Ifile = freopen(fileName, "r", stdin);

if(!Ifile){
    printf(" ERROR 404. File not found!\n");
    return 1;
    }

scanf( "%s", &testCasesS);

//first check for a proper input format.
if(isInputValid(testCasesS))
    testCases = atoi(testCasesS);
else{
    printf("\n\nSorry! Wrong Input Format!\n\n");
    return 303;
}

for(i=0;i<testCases;i++){
    breakerCount =0;
    scanf("%d", &num);
    numClone = num;

    while(num!=0){

        lastDig = num%10;
        num /=10;
        prevDig = num%10;

    if(lastDig<prevDig){
        breakerCount = 1 ; //Condition Not Satisfied!
        break;
    }
}

    if(breakerCount!=1)
        printf(" %d,%d\n", getMaxDiff(numClone), getSum(numClone));
    else
        printf(" NA\n");

    }
fclose(stdin);
return 0;


}


