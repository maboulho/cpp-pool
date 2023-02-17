#include <iostream>

int main(int ac,char **av)
{
    if (ac == 1)
    {
    		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
            return 0;
    }
    for (size_t x=0; x<strlen(av[1]); x++)
        putchar(toupper(av[1][x]));
    std::cout << std::endl;
    return 0;
}