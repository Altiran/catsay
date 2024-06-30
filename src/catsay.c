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

#define BUFFER_SIZE 100
#define EXTRA_SPACE 100

int main(int argc, char *argv[]) {
    char *defaultSay = "Meow!";
    char *say = argc > 1 ? argv[1] : defaultSay;
    unsigned long len = strlen(say);

    char *buffer = calloc((len + EXTRA_SPACE) * BUFFER_SIZE, sizeof(char));
    char *topLine = calloc((len + EXTRA_SPACE), sizeof(char));
    char *middleLine = calloc((len + EXTRA_SPACE), sizeof(char));
    char *spaces = calloc((len + EXTRA_SPACE), sizeof(char));
    char *bottomLine = calloc((len + EXTRA_SPACE), sizeof(char));

    if (!buffer || !topLine || !middleLine || !spaces || !bottomLine) {
        puts("Memory allocation failed.");
        return 1;
    }

    topLine[0] = ' ';
    for (int i = 1; i < len + 5; i++) {
        topLine[i] = '_';
    }
    strncat(buffer, topLine, (len + EXTRA_SPACE) * BUFFER_SIZE);
    strncat(buffer, "\n", (len + EXTRA_SPACE) * BUFFER_SIZE);

    sprintf(middleLine, "<  %s  >", say);
    strncat(buffer, middleLine, (len + EXTRA_SPACE) * BUFFER_SIZE);
    strncat(buffer, "\n", (len + EXTRA_SPACE) * BUFFER_SIZE);

    unsigned long numSpaces = strlen(middleLine);
    memset(spaces, ' ', numSpaces);

    bottomLine[0] = ' ';
    for (int i = 1; i < len + 5; i++) {
        bottomLine[i] = '-';
    }
    strncat(buffer, bottomLine, (len + EXTRA_SPACE) * BUFFER_SIZE);
    strncat(buffer, "\n", (len + EXTRA_SPACE) * BUFFER_SIZE);

    sprintf(buffer + strlen(buffer),
            "%s\\\n%s \\\n%s  \\  ,_     _\n%s     |\\\\_,-~/\n%s     / _  _ |    ,--.\n%s    (  @  @ )   / ,-'\n%s     \\  _T_/-._( (\n%s     /         `. \\\n%s    |         _  \\ |\n%s     \\ \\ ,  /      |\n%s      || |-_\\__   /\n%s     ((_/`(____,-'\n",
            spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces, spaces);

    puts(buffer);

    free(buffer);
    free(topLine);
    free(middleLine);
    free(spaces);
    free(bottomLine);

    return 0;
}
