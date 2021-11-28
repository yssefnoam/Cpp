#include "span.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

Span::Span(unsigned int N)
{
	this->N = N;
	this->max = 0;
}

Span &Span::operator=(const Span& other)
{
	if (this->N < other.N)
		throw OutOfLimit();
	this->c = other.c;
	return *this;
}

Span::Span(const Span& other)
{
	this->N = other.N;
	this->c = other.c;
}

Span::~Span() {}

void addNumber(int val)
{
	if (this->N <= this->max)
		throw OutOfLimit();
	this->v.insert( std::upper_bound(v.begin(), v.end(), val), val);
	this->max++;
}

// void addRange(std::vector<int>::iterator, std::vector<int>::iterator);
int shortestSpan();
int longestSpan();

const char* Span::OutOfLimit::what() const throw() { return "Out Of Limits"; }
