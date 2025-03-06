#include "noclass.hpp"

char    *getInputStreamBuffer(std::string fileName)
{
    std::ifstream inputStream(fileName);
    if (!inputStream.is_open())
    {
        std::cout << "Could not open " << fileName << std::endl;
        return (NULL) ;
    }
    std::filebuf    *buffer = inputStream.rdbuf();
    std::size_t fileSize = buffer->pubseekoff(0, inputStream.end, inputStream.in);
    buffer->pubseekpos(0, inputStream.in);
    char *content = new char[fileSize + 1];
    buffer->sgetn(content, fileSize);
    content[fileSize + 1] = '\0';
    inputStream.close();
    return (content);
}

void    writeToOutputStream(char *content, char **argv, std::string fileName)
{
    std::string search = argv[2];
    std::string replace = argv[3];
    std::string result;
    std::size_t searchLen = search.length();
    std::size_t fileSize = strlen(content);

    for (std::size_t i = 0; i < fileSize; ++i)
    {
        if (std::strncmp(content + i, search.c_str(), searchLen) == 0)
        {
            result.append(replace);
            i += searchLen - 1;
        }
        else
            result.push_back(content[i]);
    }
    std::string newFileName = fileName + ".replace";
    std::ofstream outputStream(newFileName);
    if (!outputStream.is_open())
    {
        std::cout << "Could not open " << newFileName << std::endl;
        return ;
    }
    outputStream.write(result.c_str(), result.size()); // recalculer la taille
    outputStream.close();

}

int main(int ac, char **argv)
{
    if (ac != 4)
    {
        std::cout << "./prog filename s1 s2\n";
        return (0);
    }
    std::string fileName = (const char *)argv[1];
    char *content = getInputStreamBuffer(fileName);
    if (content == NULL)
        return (0);
    writeToOutputStream(content, argv, fileName);
    delete[] content;
    return (0);
}
