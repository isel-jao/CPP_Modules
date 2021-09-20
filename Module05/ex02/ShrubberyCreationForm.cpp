#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::tree_data[2] = {
    "          .     .  .      +     .      .          .\n\
     .       .      .     #       .           .\n\
        .      .         ###            .      .      .\n\
      .      .   \"#:. .:##\"##:. .:#\"  .      .\n\
          .      . \"####\"###\"####\"  .\n\
       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n\
  .             \"#########\"#########\"        .        .\n\
        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n\
     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n\
                .\"##\"#####\"#####\"##\"           .      .\n\
    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n\
      .     \"#######\"##\"#####\"##\"#######\"      .     .\n\
    .    .     \"#####\"\"#######\"\"#####\"    .      .\n\
            .     \"      000      \"    .     .\n\
       .         .   .   000     .        .       .\n\
.. .. ..................O000O........................ ...... ...",
    "                                   .         ;\n\
      .              .              ;%     ;;\n\
        ,           ,                :;%  %;\n\
         :         ;                   :;%;'     .,\n\
,.        %;     %;            ;        %;'    ,;\n\
  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
    ;%;      %;        ;%;        % ;%;  ,%;'\n\
     `%;.     ;%;     %;'         `;%%;.%;'\n\
      `:;%.    ;%%. %@;        %; ;@%;%'\n\
         `:%;.  :;bd%;          %;@%;'\n\
           `@%:.  :;%.         ;@@%;'\n\
             `@%.  `;@%.      ;@@%;\n\
               `@%%. `@%%    ;@@%;\n\
                 ;@%. :@%%  %@@%;\n\
                   %@bd%%%bd%%:;\n\
                     #@%%%%%:;;\n\
                     %@@%%%::;\n\
                     %@@@%(o);  . '\n\
                     %@@@o%;:(.,'\n\
                 `.. %@@@o%::;\n\
                    `)@@@o%::;\n\
                     %@@(o)::;\n\
                    .%@@@@%::;\n\
                    ;%@@@@%::;.\n\
                   ;%@@@@%%:;;;.\n\
               ...;%@@@@@%%:;;;;,..    Gilo97\n\
------------------------------------------------\n"};

ShrubberyCreationForm::ShrubberyCreationForm() : Form("0x00", 145, 137), target("0x00") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery Creation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form(obj), target(obj.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
  (void)obj;
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const char *ShrubberyCreationForm::TargetFileOpenException::what() const throw()
{
  return "ShrubberyCreationFormException: Cannot open file";
}

const char *ShrubberyCreationForm::WriteException::what() const throw()
{
  return "ShrubberyCreationFormException: Cannot write to the file";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
  Form::execute(executor);
  std::string const target_name = target + "_shrubbery";
  std::ofstream outfile;
  outfile.open(target_name.c_str(), std::ios::out | std::ios::app);
  if (!outfile.is_open() || outfile.bad())
    throw TargetFileOpenException();
  for (int i = 0; i < 2; i++)
  {
    outfile << ShrubberyCreationForm::tree_data[i];
    if (outfile.bad())
    {
      outfile << std::endl;
      outfile.close();
      throw WriteException();
    }
  }
  outfile << std::endl;
  outfile.close();
}
