#include <stdio.h> 
#include <string.h> 
 
main() 
{ 
    char email[15]; 
    char password[12]; 
 
 
    printf("Enter your email : \n"); 
    scanf("%s",&email); 
 
    printf("Enter your password : \n"); 
    scanf("%s",&password); 
 
    if(strcmp(email,"msavaliya069@email.com")==0){ 
        if(strcmp(password,"milan@8434")==0){ 
 
        printf("\n saso password se!"); 
 
 
        }
		else{ 
    		printf("\n khoto password se"); 
		} 
    }
	else
	{ 
   		printf("\n khoti email se"); 
	} 
 
} 