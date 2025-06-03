#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <stack>
# include <vector>
# include <list>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private:
		std::vector<int>	vec;
		std::list<int>		lst;
		int straggler;
		clock_t start_time;


	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &rhs);

		std::list<int> build_jacob_insertion_sequence(int length);
		PmergeMe(char **argv);
		void SortList(std::list<int> arr);
		void Sortbypair(std::list<std::pair<int, int> > sorted_pares);


		template <typename Container>
		void print(const Container& container, const std::string& tipo, std::string display);
    	void print_time_to_process(std::string container);


		void SortVector(std::vector<int> vec);
		void Sortbypair_vector(std::vector<std::pair<int, int> > sorted_pares);
		std::vector<int> build_jacob_insertion_sequence_vector(int lenght);
};

#endif
