/**
 * Catsay - a fun command-line tool that displays a customizable message alongside an adorable ASCII art cat.
 * Copyright © 2024 Altiran Systems Pvt. Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
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
    char *buffer = calloc((len + 100) * 20, sizeof(char));
    char *topLine = calloc((len + 100), sizeof(char));
    char *middleLine = calloc((len + 100), sizeof(char));
    char *spaces = calloc((len + 100), sizeof(char));
    char *bottomLine = calloc((len + 100), sizeof(char));

    // Prepare the top line
    strcpy(topLine, " ");
    for (int i = 0; i < len + 4; i++) {
        strcat(topLine, "_");
    }
    sprintf(buffer + strlen(buffer), "%s\n", topLine);

    // Prepare the say
    sprintf(middleLine, "<  %s  >", say);
    sprintf(buffer + strlen(buffer), "%s\n", middleLine);

    unsigned long numSpaces = strlen(middleLine);
    strcpy(spaces, "");
    for (int i = 0; i < numSpaces; i++) {
        strcat(spaces, " ");
    }

    // Prepare the bottom line
    strcpy(bottomLine, " ");
    for (int i = 0; i < len + 4; i++) {
        strcat(bottomLine, "-");
    }
    sprintf(buffer + strlen(buffer), "%s\n", bottomLine);

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
