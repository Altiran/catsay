/**
 * Copyright © 2024 Altiran Systems Pvt. Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the “Software”), to deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Define a default string
    char *defaultSay = "Meow!";

    // Use the default string if no say is provided
    char *say = argc > 1 ? argv[1] : defaultSay;

    // Get the length of the string
    unsigned long len = strlen(say);

    // Dynamically allocate memory for the arrays based on the length of the input string
    char *buffer = calloc((len + 100) * 100, sizeof(char));
    char *topLine = calloc((len + 100), sizeof(char));
    char *middleLine = calloc((len + 100), sizeof(char));
    char *spaces = calloc((len + 100), sizeof(char));
    char *bottomLine = calloc((len + 100), sizeof(char));

    // Prepare the top line
    topLine[0] = ' ';
    for (int i = 1; i < len + 5; i++) {
        topLine[i] = '_';
    }
    strcat(buffer, topLine);
    strcat(buffer, "\n");

    // Prepare the say
    sprintf(middleLine, "<  %s  >", say);
    strcat(buffer, middleLine);
    strcat(buffer, "\n");

    unsigned long numSpaces = strlen(middleLine);
    memset(spaces, ' ', numSpaces);

    // Prepare the bottom line
    bottomLine[0] = ' ';
    for (int i = 1; i < len + 5; i++) {
        bottomLine[i] = '-';
    }
    strcat(buffer, bottomLine);
    strcat(buffer, "\n");

    // Prepare the cat
    sprintf(buffer + strlen(buffer),
            "%s\\\n%s \\\n%s  \\  ,_     _\n%s     |\\\\_,-~/\n%s     / _  _ |    ,--.\n%s    (  @  @ )   / ,-'\n%s     \\  _T_/-._( (\n%s     /         `. \\\n%s    |         _  \\ |\n%s     \\ \\ ,  /      |\n%s      || |-_\\__   /\n%s     ((_/`(____,-'\n",
            spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces);

    // Print the entire buffer
    printf("%s", buffer);

    // Free the allocated memory
    free(buffer);
    free(topLine);
    free(middleLine);
    free(spaces);
    free(bottomLine);

    return 0;
}
