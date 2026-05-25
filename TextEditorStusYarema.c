// TextEditorStusYarema.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "Text.c"

void get_first_character(char* pointer) {
    scanf("%c", &pointer[0]);
    char character = pointer[0];
    while (character != '\n') {
        scanf("%c", &character);
    }
}


void process_command(char command) {
    if (command == '0') {
        printf("Help is here:\n");
        printf("Command not implemented\n");
        return;
    }
    if (command == '1') {
        printf("Append text to line\n");
        printf("Command not implemented\n");
        return;
    }
    if (command == '2') {
        printf("Start the new line\n");
        printf("Command not implemented\n");
        return;
    }
    if (command == '3') {
        printf("Save text to file\n");
        printf("Command not implemented\n");
        return;
    }
    if (command == '4') {
        printf("Load text from file\n");
        printf("Command not implemented\n");
        return;
    }
    if (command == '5') {
        printf("Print text to console\n");
        printf("Command not implemented\n");
        return;
    }
    if (command == '6') {
        printf("Search for text\n");
        printf("Command not implemented\n");
        return;
    }
    printf("There is no command \"%c\"\n", command);
    printf("If you need help type 0 into console\n");
    return;
}
int main()
{
    struct line text;
    struct string string1;
    struct string string2;
    text.pointer = NULL;
    text.value = &string1;

    printf("write first line > ");
    create(&string1);
    add_line(&text, &string1);
    printf("write second line > ");
    create(&string2);
    add_line(&text, &string2);
    print_text(&text);
    destroy_text(&text);
    //printf("Hello, world!\n");
    //char* command = (char*)malloc(sizeof(char));
    //while (1) {
    //    printf("Enter your command > ");
    //    get_first_character(command);
    //    if (command[0] == '\n') {
    //        printf("End of program");
    //        return 0;
    //    }
    //    process_command(command[0]);
    //}
    //return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
