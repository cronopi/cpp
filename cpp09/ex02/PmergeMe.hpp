#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <stack>
# include <vector>
# include <list>

class PmergeMe
{
	private:


	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &rhs);

		std::vector<int>	vec;
		std::list<int>		lst;
		PmergeMe(std::string str);
};

#endif

// ./MergeMe 1 2 4 