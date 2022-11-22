#include "iostream"

void    replace(std::string s1, std::string s2, std::string s3){
    std::size_t found = s1.find(s2);
    if (found != s1.npos)
        std::cout << found << std::endl;
    (void)s3;
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        const std::string &s1(av[1]);
        const std::string &s2(av[2]);
        const std::string  &s3(av[3]);
        replace(s1, s2, s3);
    } else
        std::cout << "Error: " << std::endl;
    return 0;
}