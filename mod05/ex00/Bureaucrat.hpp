#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
};

    std::ostream &operator<<(std::ostream &, const Bureaucrat &);
#endif /* ----------- end Bureaucrat ------------ */