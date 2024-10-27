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
	if (arr.size() <= 1)
		return;


    std::list<int> left, right;
    std::list<int>::iterator mid = arr.begin();
    std::advance(mid, arr.size() / 2);



    left.splice(left.begin(), arr, arr.begin(), mid);
    right.splice(right.begin(), arr, mid, arr.end());

    //SortList(left);
    //SortList(right);

    //merge(left, right, arr);
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
    print(lst, "list", "before");
	print(vec, "vector", "before");

	SortList(lst);
}
