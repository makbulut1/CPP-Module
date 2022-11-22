#include "iostream"
#include "fstream"
//void    replace(std::string s1, std::string s2, std::string s3){
//    std::size_t found = -1;
//
//    label:
//    found = s1.find(s2, found + 1);
//    for (int j = 0; s2[j] || s3[j]; j++){
//        s1[found] = s3[j];
//        found++;
//    }
//    if (found < s1.length())
//      goto label;
//    std::cout << s1 << std::endl;
//}

int main(int ac, char **av)
{
    (void)av;
    if (ac == 4)
    {
      std::string  fileName = av[1];
        std::fstream file(fileName);
        fileName = fileName.substr(0, fileName.find_last_of(".")) + ".replace";
        std::ofstream newFile(fileName);
        std::cout << fileName;
//        const std::string s1(av[1]);
//        const std::string s2(av[2]);
//        const std::string  s3(av[3]);
//        replace(s1, s2, s3);
//        replace(&s1, &s2, &s3);
//        replace(&s1, &s2, &s3);
    } else
        std::cout << "Error: " << std::endl;
    return 0;
}