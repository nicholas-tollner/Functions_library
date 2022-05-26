//
// Created by Nickt on 25/05/2022.
//

#include "file.h"

/**
 * Skips a number of lines in a given file
 * @param file The file to move in
 * @param skip The number of lines to skip
 * @return The original file
 */
std::ifstream& gotoLine(std::ifstream &file, unsigned int skip) {
    if (!file)
    {
        printf("File could not be opened");
        exit(1);
    }
    file.seekg(std::ios_base::beg);                     // Set next character to be extracted to beginning of file

    // Skip lines
    for (int i = 0; i < skip; i++)
    {
        file.ignore(INT_MAX, '\n');            // Read in and discard characters until delimiter is reached
    }
    return file;
}
