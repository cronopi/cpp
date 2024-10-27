#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <stack>
# include <vector>
# include <list>

class PmergeMe
{
	private:
		std::vector<int>	vec;
		std::list<int>		lst;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &rhs);

		PmergeMe(char **argv);
		void SortList(std::list<int> arr);
		void merge(std::list<int>& left, std::list<int>& right, std::list<int>& arr);
		void SortVector(std::vector<int> vec);
		template <typename Container>
    	void print(const Container& container, const std::string& tipo, std::string display);
};

#endif

// ./MergeMe 1 2 4
