#include "RPN.hpp"

RPN::RPN() :stack()
{

}

RPN::~RPN()
{

}

RPN::RPN(RPN const & src)
{
	*this = src;
}

RPN & RPN::operator=(RPN const & rhs)
{
	(void)rhs;
	return (*this);
}

void RPN::calculate(std::string str)
{
	int num = 0;
	int value_1 = 0;
	int value_2 = 0;
	if (str == "")
	{
		std::cout << "Error" << std::endl;
		return;
	}
	for (size_t i = 0; i < str.length(); i++)
	{
		if ((!(str[i] >= '0' && str[i] <= '9')) && str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != ' ')
		{
			std::cout << "Error: caracter incorrecto" << std::endl;
			return;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (str[i + 1] >= '0' && str[i] <= '9')
			{
				std::cout << "error: number too big" << std::endl;
				return;
			}
			stack.push(str[i] - '0');
		}
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			if (stack.size() != 2)
			{
				std::cout << "Error" << std::endl;
				return;
			}
			value_2 = stack.top();
			stack.pop();
			value_1 = stack.top();
			stack.pop();
			if (str[i] == '+')
			{
				num = value_1 + value_2;
			}
			else if (str[i] == '-')
			{
				num = value_1 - value_2;
			}
			else if (str[i] == '/')
			{
				num = value_1 / value_2;
			}
			else if (str[i] == '*')
			{
				num = value_1 * value_2;
			}
			stack.push(num);
		}
	}
	if (stack.size() != 1)
		std::cout << "Error" << std::endl;
	else
		std::cout << stack.top() << std::endl;

}


/* $> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
42
$> ./RPN "7 7 * 7 -"
42
$> ./RPN "(1 + 1)"
Error */
