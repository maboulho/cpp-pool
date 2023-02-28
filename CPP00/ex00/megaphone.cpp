#include <iostream>

int main(int ac,char **av)
{
    if (ac == 1)
    {
    		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
            return 0;
    }
    int i = 1;
    while(i < ac)
    {
        size_t j = 0;
        while(j < strlen(av[i]))
        {
            std::cout << (char)toupper(av[i][j]);
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return 0;
}