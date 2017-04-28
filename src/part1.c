/*
 * Module 1 depends on this fuction.
 * the function counts the number of prime numbers present in the given range and
 * then prints the output probability of selecting a prime number in all the numbers
 * present in the range.
 * */

#include "header.h"
//Checking a number for prime.

int isPrime(int num){

    int  i, flag = 0;

    if(num == 1 || num == 0)
        return 0;
    for(i=2; i < num; i++){
      if(num%i==0){
          flag=1;
          break;
    }

}
    if (flag==0)
           return 1;
    return 0;
}

void secQuest(char *filename){

long int i, testCases;
long long int leftLim, rightLim;
char leftLimS[10], rightLimS[10], testCasesS[10];
int primeCount = 0;


FILE *Ifile = freopen(filename, "r", stdin);

    if(Ifile == NULL){
        printf(" ERROR 404.. File not found!\n");

        return ;
    }
    scanf("%s", &testCasesS);

/* Checking input before operating
 * isInputValid(char *) will return 1 if input has only digits in it
 * otherwise will return 0.
 *
  */
    if(isInputValid(testCasesS))
        testCases = atol(testCasesS);
    else{
        showError();
        return ;
    }

    while(testCases--){
        primeCount = 0;
        scanf("%s",&leftLimS);
         if(isInputValid(leftLimS))
        leftLim = atoll(leftLimS);
    else{
        showError();

        return ;
    }
    scanf("%s",&rightLimS);
      if(isInputValid(rightLimS))
            rightLim = atoll(rightLimS);
    else{
        showError();
        return ;
    }

     if(leftLim > rightLim){
        printf("\n\n Sorry :( Error: Wrong Input Sequence!!\n\n");
        return ;
     }
   for(i=leftLim ; i<= rightLim ; i++)
     if(isPrime(i)){
         primeCount++;

    }
    //Getting Probability!

    printf("%.6f\n", (float)primeCount/((rightLim-leftLim) +1));

}
    fclose(Ifile);
}

