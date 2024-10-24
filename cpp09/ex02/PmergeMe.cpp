#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{


}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	(void)copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
	(void)rhs;
	return (*this);
}

PmergeMe::PmergeMe(std::string str)
{
	int tmp = 0;
	for(int i = 0; str.size(); i++)
    {
		if (str[i] >= '0' && str[i] <= '9')
		{
			tmp = (str[i] - '0');
			std::cout << tmp << std::endl;
		}
        //vec.push_back(5);
    }

}