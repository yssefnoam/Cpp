#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
// class Form;

class Bureaucrat /* ------------- start Bureaucrat --------- */
{
    const std::string name;
    int grade;

public:
    Bureaucrat(std::string, int);
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&);
    ~Bureaucrat(void);

    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };

    int getGrade(void) const;
    std::string getName(void) const;

    void incrementGrade(void);
    void decrementGrade(void);

    void    signForm(const Form &) const;
    
};

std::ostream &operator<<(std::ostream &, const Bureaucrat &);

#endif /* ----------- end Bureaucrat ------------ */