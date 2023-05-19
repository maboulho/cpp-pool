#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <cstdlib>
# include <ctime>

class Span {
    private:
        unsigned int _n;
        std::vector<int> _v;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & toCopy);
        Span & operator=(Span const & toCopy);
        ~Span();

        void addNumber(int nb);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan() const;
        long longestSpan() const;

        class FullSpanException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class NotEnoughNumbersException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif
