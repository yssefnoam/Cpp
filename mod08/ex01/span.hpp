#ifndef SPAN_HPP
#define SPAN_HPP

class Span{
public:
    Span(unsigned int);
    Span &operator=(const Span&);
    Span(const Span&);
    ~Span();
    void addNumber(int);
    int shortestSpan();
    int longestSpan();
};

#endif