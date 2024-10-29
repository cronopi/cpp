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
		int straggler;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &rhs);

		std::list<int> build_jacob_insertion_sequence(int length);
		PmergeMe(char **argv);
		void SortList(std::list<int> arr);
		void Sortbypair(std::list<std::pair<int, int>> sorted_pares);


		template <typename Container>
		void print(const Container& container, const std::string& tipo, std::string display);


		void SortVector(std::vector<int> vec);
};

#endif
