#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{
	private:
		unsigned int N;
		unsigned int max;
		std::vector<int> v;
	public:
		Span(unsigned int);
		Span &operator=(const Span&);
		Span(const Span&);
		~Span();

		void addNumber(int);
		// void addRange(std::vector<int>::iterator, std::vector<int>::iterator);
		int shortestSpan();
		int longestSpan();
		class OutOfLimit: public std::exception
		{
		const char *what() const throw();
		};
};

#endif
