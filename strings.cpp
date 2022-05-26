#include "strings.h"
#include <sstream>
#include <vector>

/**
 * Splits a string around a given delimiter into provided vector
 * @param line The strings to split
 * @param delimiter The char to split around
 * @param vec The vector<std::string> to fill with split strings
 */
void stringSplit(std::string line, char delimiter, std::vector<std::string> &vec)
{
    std::stringstream stream(line);
    std::string token;

    while (std::getline(stream, token, delimiter)) {
        if (!token.empty())
        {
            vec.push_back(token);
        }
    }
}
