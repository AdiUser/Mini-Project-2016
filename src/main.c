/*
 ============================================================================
 Name        : Mini-Project2106
 Authors     : Aditya Saxena, Shubham Tyagi, Himanshu Goyal
 Version     : 2.0.5
 Last Edit   : 18/11/16 4:04 AM
 Copyright   : Open Source
 Description : Modularity and Modules in C
 IDE         : Eclipse Neon
 ============================================================================
 */

#include "header.h"

int main(int argc, char* argv[]){
	/*
	 * Using command line arguments for
	 * passing the File name. argv[1] will
	 * hold the File name required.
 	 */
     if(argc > 2){
            printf("\n\nError 403 : Too many file names!!\n\n ");
            return 0;
     }
     else if(argc < 2){
        printf("Please specify the file name also!!");
        return 0;
     }

     char *file = argv[1];
     /*
      *Checking for a valid file according
      * to the file name recieved!
      */
     if(isFilePresent(file)){
    	 if(isInputPresent(file))
    		 eeke(file);
    	 else
		 printf("\t\nSorry .. Seems like the File is EMPTY\n\t");
     }
     else
     {
    	 printf("\t\nSorry Can Not find file!! \n\t");
         return 404;
     }



return 0;
}
