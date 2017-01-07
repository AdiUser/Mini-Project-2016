/*
 * The fuctions returns 0 if no valid file is present in the working directory
 * otherwise will return 1 for successful location.*/

#include "header.h"
int isFilePresent(char *file){

FILE *ft = fopen(file, "r");

if(ft){
    fclose(ft);
    return 1;
}

return 0;

}
int isInputPresent(char *file){
	
	struct stat reg;
		int newReg = stat(file ,&reg);

		if(reg.st_size>0)
			return 1;
		else
			return 0;

}

