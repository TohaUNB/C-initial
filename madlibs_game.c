//madlibs game
// Mad Libs is a classic word game where one player prompts others for a 
// list of words—such as nouns, verbs, adjectives, or body parts—without revealing 
// the context of the story. Once all the blank spaces are filled, the player reads 
// the story aloud, usually resulting in a silly, absurd, or nonsensical narrative.

#include <stdio.h>
#include <string.h>

//fgets takes input from the user and stores it in a pre determined variable of the same name

int main() {

    char noun[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";
    char verb[50] = "";
    

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1)  - 1] = '\0'; // we do this bc there is double spacing 
    //in the output from the extra newline from fgets

    
    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)  - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2)  - 1] = '\0';

    printf("Enter an verb (-ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)  - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3)  - 1] = '\0';


    printf("\nToday i went to a %s zoo\n", adjective1);
    printf("In an exhibit i saw a %s\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was so %s\n", adjective3);
    

    return 0;

}