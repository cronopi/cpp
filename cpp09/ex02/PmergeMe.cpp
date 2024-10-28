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


template <typename Container>
void PmergeMe::print(const Container& container, const std::string& tipo, std::string display)
{
	std::cout << tipo << " =>\n";
	 std::cout << display << ": ";
    for (typename Container::const_iterator it = container.begin(); it != container.end(); it++)
	{
        std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void PmergeMe::SortList(std::list<int> arr)
{
    std::list<std::pair<int, int>> pares;
    std::list<std::pair<int, int>> sorted_pares;
    int tmp = 0;
    int tmp_it = 0;
    int straggler = -1;
    (void)straggler;
	if (arr.size() <= 1)
		return;

    if ((arr.size() % 2) != 0)
    {   
        straggler = arr.back();
        std::cout << "straggler: " << straggler << std::endl;
        arr.pop_back();
        print(arr, "list", "arreglada");
    }
    for (std::list<int>::iterator it = arr.begin(); it != arr.end();)
    {
        pares.emplace_back(*it, *std::next(it));
        it++;
        it++;
    }
    for (auto& par : pares) 
    {
        if (par.first > par.second)
        {
            tmp = par.first;
            par.first = par.second;
            par.second = tmp;
        }
    }
    for (auto& par : pares) 
    {
        std::cout << "(" << par.first << ", " << par.second << ")" << std::endl;
    }
	std::cout << std::endl;


    while (pares.size() > 0)
    {
        tmp = 2147483647;
        int tmp2 = 2147483647;
        std::list<std::pair<int, int>>::iterator it;
        for (it = pares.begin(); it != pares.end(); it++)
        {
            if (tmp > it->second)
            {
                tmp = it->second;
                tmp2 = it->first;
                tmp_it = std::distance(pares.begin(), it);
            }
            std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
        }

        sorted_pares.emplace_back(tmp2, tmp);
        pares.erase(tmp_it);
        it = pares.begin();

        std::cout << "sorted_pares: " << std::endl;
        for (std::list<std::pair<int, int>>::iterator it = sorted_pares.begin(); it != sorted_pares.end(); it++)
        {
            std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
        }
    }

}

void PmergeMe::merge(std::list<int>& left, std::list<int>& right, std::list<int>& arr)
{
    std::list<int>::iterator it1 = left.begin();
    std::list<int>::iterator it2 = right.begin();

    while (it1 != left.end() && it2 != right.end())
    {
        if (*it1 <= *it2)
        {
            arr.push_back(*it1);
            ++it1;
        }
        else
        {
            arr.push_back(*it2);
            ++it2;
        }
    }

    while (it1 != left.end())
    {
        arr.push_back(*it1);
        ++it1;
    }

    while (it2 != right.end())
    {
        arr.push_back(*it2);
        ++it2;
    }
}


PmergeMe::PmergeMe(char **argv)
{
    int tmp = 0;
    int i = 0;
    int j = 0;
	while(argv[i] != NULL)
    {
		if (argv[i][j] >= '0' && argv[i][j] <= '9')
		{
			tmp = (argv[i][j] - '0');
            vec.push_back(tmp);
            lst.push_back(tmp);
		}
        i++;
    }
/*     print(lst, "list", "before");
	print(vec, "vector", "before"); */

	SortList(lst);
}
