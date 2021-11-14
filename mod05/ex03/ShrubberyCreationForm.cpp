#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("fName", 145, 137), _target(target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
        this->_target = other._target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other.getName(), other.getSigneGrade(), other.getExecuteGrade())
{
    this->_target = other._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::formAction() const
{
    std::string fileName = this->_target;

    fileName.append("_shrubbery");
    std::ofstream outfile(fileName);
    if (outfile)
    {
        outfile << "       /\\      \n";
        outfile << "      /\\*\\     \n";
        outfile << "     /\\O\\*\\    \n";
        outfile << "    /*/\\/\\/\\   \n";
        outfile << "   /\\O\\/\\*\\/\\  \n";
        outfile << "  /\\*\\/\\*\\/\\/\\ \n";
        outfile << " /\\O\\/\\/*/\\/O/\\\n";
        outfile << "       ||      \n";
        outfile << "       ||      \n";
        outfile << "       ||      \n";
        outfile << std::endl;
        outfile << "         v" << std::endl;
        outfile << "        >X<" << std::endl;
        outfile << "         A" << std::endl;
        outfile << "        d$b" << std::endl;
        outfile << "      .d\\$$b." << std::endl;
        outfile << "    .d$i$$\\$$b." << std::endl;
        outfile << "       d$$@b" << std::endl;
        outfile << "      d\\$$$ib" << std::endl;
        outfile << "    .d$$$\\$$$b" << std::endl;
        outfile << "  .d$$@$$$$\\$$ib." << std::endl;
        outfile << "      d$$i$$b" << std::endl;
        outfile << "     d\\$$$$@$b" << std::endl;
        outfile << "  .d$@$$\\$$$$$@b." << std::endl;
        outfile << ".d$$$$i$$$\\$$$$$$b." << std::endl;
        outfile << "        ###" << std::endl;
        outfile << "        ###" << std::endl;
        outfile << "        ###" << std::endl;
        outfile << std::endl;
        outfile << "             /\\" << std::endl;
        outfile << "            <  >" << std::endl;
        outfile << "             \\/" << std::endl;
        outfile << "             /\\" << std::endl;
        outfile << "            /  \\" << std::endl;
        outfile << "           /++++\\" << std::endl;
        outfile << "          /  ()  \\" << std::endl;
        outfile << "          /      \\" << std::endl;
        outfile << "         /~`~`~`~`\\" << std::endl;
        outfile << "        /  ()  ()  \\" << std::endl;
        outfile << "        /          \\" << std::endl;
        outfile << "       /*&*&*&*&*&*&\\" << std::endl;
        outfile << "      /  ()  ()  ()  \\" << std::endl;
        outfile << "      /              \\" << std::endl;
        outfile << "     /++++++++++++++++\\" << std::endl;
        outfile << "    /  ()  ()  ()  ()  \\" << std::endl;
        outfile << "    /                  \\" << std::endl;
        outfile << "   /~`~`~`~`~`~`~`~`~`~`\\" << std::endl;
        outfile << "  /  ()  ()  ()  ()  ()  \\" << std::endl;
        outfile << "  /*&*&*&*&*&*&*&*&*&*&*&\\" << std::endl;
        outfile << " /                        \\" << std::endl;
        outfile << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\" << std::endl;
        outfile << "           |   |" << std::endl;
        outfile << "          |`````|" << std::endl;
        outfile << "          \\_____/" << std::endl;
        outfile << std::endl;
        outfile << "          .     .  .      +     .      .          ." << std::endl;
        outfile << "    .       .      .     #       .           ." << std::endl;
        outfile << "       .      .         ###            .      .      ." << std::endl;
        outfile << "     .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
        outfile << "         .      . \"####\"###\"####\"  ." << std::endl;
        outfile << "      .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
        outfile << " .             \"#########\"#########\"        .        ." << std::endl;
        outfile << "       .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
        outfile << "    .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
        outfile << "               .\"##\"#####\"#####\"##\"           .      ." << std::endl;
        outfile << "   .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
        outfile << "     .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
        outfile << "   .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
        outfile << "           .     \"      000      \"    .     ." << std::endl;
        outfile << "      .         .   .   000     .        .       ." << std::endl;
        outfile << ". .. ..................O000O........................ ...... ..." << std::endl;
        outfile.close();
    }
    else
        std::cerr << "Error: can't create file " << fileName << "." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat)
{
    if (this->getSigned() && bureaucrat.getGrade() <= this->getExecuteGrade())
        formAction();
    else if(!(this->getSigned()))
        throw Form::NotSigned();
    else
        throw Bureaucrat::GradeTooLowException();
}