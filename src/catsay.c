#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // Check if the say is provided
    if(argc > 1)
    {
        // Get the length of the string
        unsigned long len = strlen(argv[1]);

        // Print the top line
        char topLine[50] = " ";
        for(int i = 0; i < len + 4; i++) {
            strcat(topLine, "_");
        }
        printf("%s\n", topLine);

        // Print the say
        char middleLine[50];
        sprintf(middleLine, "<  %s  >", argv[1]);
        printf("%s\n", middleLine);

        unsigned long numSpaces = strlen(middleLine);
        char spaces[50] = "";
        for(int i = 0; i < numSpaces; i++) {
            strcat(spaces, " ");
        }

        // Print the bottom line
        char bottomLine[50] = " ";
        for(int i = 0; i < len + 4; i++) {
            strcat(bottomLine, "-");
        }
        printf("%s\n", bottomLine);

        printf("%s\\\n", spaces);
        printf("%s \\\n", spaces);
        printf("%s  \\  ,_     _\n", spaces);
        printf("%s     |\\\\_,-~/\n", spaces);
        printf("%s     / _  _ |    ,--.\n", spaces);
        printf("%s    (  @  @ )   / ,-'\n", spaces);
        printf("%s     \\  _T_/-._( (\n", spaces);
        printf("%s     /         `. \\\n", spaces);
        printf("%s    |         _  \\ |\n", spaces);
        printf("%s     \\ \\ ,  /      |\n", spaces);
        printf("%s      || |-_\\__   /\n", spaces);
        printf("%s     ((_/`(____,-'\n", spaces);
    }
    else
    {
        printf("No message provided.\n");
    }

    return 0;
}