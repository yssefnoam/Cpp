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
    std::string _target;

public:
    Form(std::string, int, int, std::string);
    Form(const Form&);
    Form& operator=(const Form&);
    ~Form(void);

    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };

    std::string getName(void) const;
    int getSigneGrade(void) const;
    int getExecuteGrade(void) const;
    bool getSigned(void) const;
    std::string getTarget(void) const;

    void    beSigned(const Bureaucrat&);
    virtual void    execute(Bureaucrat const &) const = 0;
};

std::ostream &operator<<(std::ostream &, const Form &);

#endif /* -------- end Form -------- */