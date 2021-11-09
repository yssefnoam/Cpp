#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat /* ------------- start Bureaucrat --------- */
{
    const std::string name;
    int grade;

public:
    Bureaucrat(std::string, int);
    ~Bureaucrat(void);

    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };

    int getGrade(void);
    std::string getName(void);

    void incrementGrade(void);
    void decrementGrade(void);
};

#endif /* ----------- end Bureaucrat ------------ */