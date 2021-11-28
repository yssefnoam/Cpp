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
	this->v = other.v;
	return *this;
}

Span::Span(const Span& other)
{
	this->N = other.N;
	this->v = other.v;
}

Span::~Span() {}

void Span::addNumber(int val)
{
	if (this->N <= this->max)
		throw OutOfLimit();
	this->v.insert( std::upper_bound(this->v.begin(), this->v.end(), val), val);
	this->max++;
}

// void addRange(std::vector<int>::iterator, std::vector<int>::iterator);
int Span::shortestSpan()
{
	if (!this->N)
		return 0;
	int shortSpan;
	std::vector<int>::iterator left = this->v.begin();
	std::vector<int>::iterator right = this->v.begin();
	right++;
	shortSpan = *right - *left;
	while(right != this->v.end())
	{
		if (*right - *left < shortSpan)
			shortSpan = *right - *left;
		left++;
		right++;
	}
	return shortSpan;
}
int Span::longestSpan()
{
	if (!this->N)
		return 0;
	return this->v.back() - this->v.front();
}

const char* Span::OutOfLimit::what() const throw() { return "Out Of Limits"; }
