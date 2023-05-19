#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

class PmergeMe
{
    private :
        std::vector<unsigned int>    _v;
        std::deque<unsigned int>    _d;
    public :
        PmergeMe();
        ~PmergeMe();
        PmergeMe(PmergeMe const &to_copy);
        PmergeMe &operator=(PmergeMe const &to_copy);

        void    fill_vector(char **av,int ac);
        void    fill_deque(char **av,int ac);
        void    print_vector();
        void    print_deque();
        void    Insert_Vector(size_t size);
        void    Insert_Deque(size_t size);
        void    isvalid(char *s1);
        void    Merge_Insert_Vector(size_t left,size_t right);
        void    Merge_Insert_Deque(size_t left,size_t right);
        void    Merge_Deque(size_t left,size_t right,size_t mid);
        void    Merge_Vector(size_t left,size_t right,size_t mid);
        void    sorting(int ac,char **av);
};

#endif