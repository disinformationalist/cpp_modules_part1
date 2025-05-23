#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm : public AForm
{
public:
									PresidentialPardonForm();
									PresidentialPardonForm(const std::string& target);
									PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm&			operator=(const PresidentialPardonForm& other);
	virtual							~PresidentialPardonForm();

	void							doIt() const;
	std::string&					getTarget();


private:
	std::string _target;
};

#endif // PRESIDENTIALPARDONFORM