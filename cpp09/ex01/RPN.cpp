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

void RPN::parse(std::string str)
{
	int num = 0;
	int value_1 = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (str[i + 1] >= '0' && str[i] <= '9')
			{
				std::cout << "error: number too big" << std::endl;
				return ;
			}
			stack.push(str[i] - '0');
		}
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			if (stack.size() != 2)
			{
				std::cout << "error" << std::endl;
				return ;
			}
			value_1 = stack.top();
			stack.pop();
			if (str[i] == '+')
			{
				num = stack.top() + value_1;
				std::cout << num << std::endl;
				stack.pop();
			}
			else if (str[i] == '-')
			{
				num = stack.top() - value_1;
				std::cout << num << std::endl;
				stack.pop();
			}
			else if (str[i] == '/')
			{
				num = stack.top() / value_1;
				std::cout << num << std::endl;
				stack.pop();
			}
			else if (str[i] == '*')
			{
				num = stack.top() * value_1;
				std::cout << num << std::endl;
				stack.pop();
			}
		}
	}
}
