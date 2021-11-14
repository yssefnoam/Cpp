#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form /* ----- start Form ----- */
{
private:
    const std::string _name;
    bool _signed;
    const int _signedGrade;
    const int _executedGrade;

public:
    Form(std::string, int, int);
    Form(const Form&);
    Form& operator=(const Form&);
    virtual ~Form();

    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };

    class NotSigned : public std::exception {
        const char *what() const throw();
    };

    std::string getName(void) const;
    int getSigneGrade(void) const;
    int getExecuteGrade(void) const;
    bool getSigned(void) const;

    void    beSigned(const Bureaucrat&);
    virtual void    execute(Bureaucrat const &) = 0;
};

std::ostream &operator<<(std::ostream &, const Form &);

#endif /* -------- end Form -------- */