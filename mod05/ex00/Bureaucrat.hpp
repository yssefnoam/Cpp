#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    const std::string name;
    int grade;

public:
    Bureaucrat(std::string, int);
    ~Bureaucrat(void);

    class GradeTooLowException: std::exception {
    };
    class GradeTooHighException: std::exception {
    };

    int getGrade(void);
    std::string getName(void);

    void    incrementGrade(void);
    void    decrementGrade(void);
};

#endif /* ----------- end Bureaucrat ------------ */