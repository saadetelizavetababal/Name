//std id=2200003366
//name-surname= Saadet Elizaveta BABAL
//In this project i wanted to write program (main) that takes a first name and last name entered by the user and displays the last name, a comma, and the first initial, and a period.
#define _CRT_SECURE_NO_WARNINGS //Here i used this statement to avoid problems with scanfs.
#include <stdio.h>//Here i included stdio.h to use the library under header file.
#include <string.h>//Here i included the string header file so that the inputs and outputs to the system can be in the form of text-characters.


void reverse_name(char* name) { //Here i defined a function which is void reverse name and it takes a string pointer as an argument.
    
    int space = 0;//Here i assigned zero to the space integer to use it in the while loop.
    while (name[space] != ' ' && name[space] != '\0') {//Here i used  a while loop to find the index of the space character that separates the first name and last name in the input string.
        space++; //Here i increased it by one for the number of space characters.
    }//Here the loop checks if the current character in the string "name" is not a space or null character. The loop continues as long as the character is not a space and the end of the string is not reached. 

    //Here i used strlen expression because the strlen() function returns the length of the string in the str parameter.
    for (int j = space + 1; j < strlen(name); j++) {//Here i used for loop to print the last name of the input string.
        printf("%c", name[j]);//Here i used %c because the information entered by the user is of character type.
    }//Here the loop goes through the characters of the "name" string, starting from the character after the space that separates the first and last names, and ending at the last character in the "name" string.

    printf(",");//Here i used printf to print the comma between last name and first name.
    printf(" %c.", name[0]);//Here i used printf to print the first initial of the input string, followed by a period character.
}

int main(void) {//Here main function runs when the program is executed.
    char name[50];//Here i declared a char array called 'name' with a length of 50.
    //Here since I want the name from the user to be a maximum of fifty characters long, I created the series with 50 characters.
 
    printf("Enter your first and last name: ");//Here i used the printf function to get the firstand last name information from the user.
    scanf("%[^\n]s", name);//Here i used %s to get user-entered string characters as input.

    reverse_name(name);//Here I used this expression to be able to call the reverse_name function as name.

    return 0;//Here i used the return 0 statement to terminate the system.
}




