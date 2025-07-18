#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN
{
	private:
		std::stack<int> stack;
	public:
		RPN();
		~RPN();
		RPN(RPN const & src);
		RPN & operator=(RPN const & rhs);

		void calculate(std::string str);
		void printStack(std::stack<int> stack);
};

#endif
