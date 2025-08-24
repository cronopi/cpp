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

void PmergeMe::print_time_to_process(std::string container)
{
	clock_t end_time = clock();
	double elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000;
	if (container == "list")
	{
		std::cout << std::endl;
		std::cout << "Time to process a range of " << lst.size() << " elements with std::list container: " << elapsed_time << " us" << std::endl;
	}
	if (container == "vector")
	{
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector container: " << elapsed_time << " us" << std::endl;
	}
}

template <typename Container>
void PmergeMe::print(const Container& container, const std::string& tipo, std::string display)
{
	if (tipo == "before")
		std::cout << tipo << ": ";
	else
		std::cout << tipo << ":  ";
	(void)display;
	for (typename Container::const_iterator it = container.begin(); it != container.end(); it++)
	{
		std::cout << *it << " ";
	}
}

std::deque<int> PmergeMe::build_jacob_insertion_sequence(int length)
{
	std::deque<int> sequence;
	sequence.push_back(1);
	sequence.push_back(3);

	int a = 1;
	int b = 3;
	int next;
	for (int i = 2; i < length; i++)
	{
		next = a + b + 1;
		sequence.push_back(next);
		a = b;
		b = next;
	}

	return (sequence);
}

void PmergeMe::Sortbypair(std::deque<std::pair<int, int> > sorted_pares)
{
	std::deque<int> s;
	std::deque<int> pend;
	std::deque<int> insertion_sequence;

	for(std::deque<std::pair<int, int> >::iterator it = sorted_pares.begin(); it != sorted_pares.end(); it++)
	{
		pend.push_back(it->first);
		s.push_back(it->second);
	}
	s.push_front(pend.front());
	pend.pop_front();
	//print(pend, "list", "pend");
	//print(s, "list", "s");

	insertion_sequence = build_jacob_insertion_sequence(pend.size());
	//print(insertion_sequence, "list", "insertion_sequence");

	std::cout << "por aqui si pasa" << std::endl;
	int i = 0;
for (std::deque<int>::iterator it = pend.begin(); it != pend.end(); ++it)
{
    std::deque<int>::iterator insertion_it = insertion_sequence.begin();
    std::advance(insertion_it, i);
    int index = *insertion_it;
    s.insert(s.end() - index, *it);
    i++;
}
	std::cout << "y aqui no llegas" << std::endl;

	std::deque<int>::iterator begin = s.begin();
	std::deque<int>::iterator end = s.end();
	while (begin != end && straggler != -1)
	{
		std::deque<int>::iterator middle = begin;
		std::advance(middle, std::distance(begin, end) / 2);

		if (straggler == *middle || (straggler < *middle && straggler > *(--middle)))
		{
			s.insert(middle, straggler);
			break;
		}
		else if (straggler < *middle)
		{
			end = middle;
		}
		else
		{
			begin = ++middle;
		}
	}
	if (begin == end)
	s.insert(begin, straggler);
	int swap = true;
	while(swap == true)
	{
		swap = false;
		for(std::deque<int>::iterator it = s.begin(); it != s.end(); it++)
		{
			std::deque<int>::iterator next_it = it;
			next_it++;
			if (next_it != s.end() && *it > *next_it)
			{
				int temp = *it;
				*it = *next_it;
				*next_it = temp;
				swap = true;
			}
		}
	}

	print(s, "after", "s");
	print_time_to_process("list");
}

void PmergeMe::SortDeque(std::deque<int> arr)
{
	std::deque<std::pair<int, int> > pares;
	std::deque<std::pair<int, int> > sorted_pares;
	int tmp = 0;
	straggler = -1;
	if (arr.size() <= 1)
		return;

	if ((arr.size() % 2) != 0)
	{
		straggler = arr.back();
		arr.pop_back();
	}
	for (std::deque<int>::iterator it = arr.begin(); it != arr.end();)
	{
		pares.push_back(std::make_pair(*it, *(it++)));
		it++;
	}

	for (std::deque<std::pair<int, int> >::iterator it = pares.begin(); it != pares.end(); it++)
	{
		if (it->first > it->second)
		{
			tmp = it->first;
			it->first = it->second;
			it->second = tmp;
		}
	}
	std::cout << std::endl;
	while (pares.size() > 0)
	{
		tmp = 2147483647;
		int tmp2 = 2147483647;
		std::deque<std::pair<int, int> >::iterator it;
		std::deque<std::pair<int, int> >::iterator it_tmp;
		for (it = pares.begin(); it != pares.end(); it++)
		{
			if (tmp > it->second)
			{
				tmp = it->second;
				tmp2 = it->first;
				it_tmp = it;
			}
		}
		//sorted_pares.emplace_back(tmp2, tmp);
		sorted_pares.push_back(std::make_pair(tmp2, tmp));
		pares.erase(it_tmp);
		it = pares.begin();
	}
		//std::cout << "sorted_pares: " << std::endl;
/*         for (std::list<std::pair<int, int>>::iterator it = sorted_pares.begin(); it != sorted_pares.end(); it++)
		{
			std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
		} */
	std::cout << "llegas aquí" << std::endl;
	Sortbypair(sorted_pares);
}


std::vector<int> PmergeMe::build_jacob_insertion_sequence_vector(int lenght)
{
	std::vector<int>sequence;
	sequence.push_back(1);
	sequence.push_back(3);

	int a = 1;
	int b = 3;
	int next;
	for (int i = 2; i < lenght; i++)
	{
		next = a + b;
		sequence.push_back(next);
		a = b;
		b = next;
	}
	return (sequence);
}

void PmergeMe::Sortbypair_vector(std::vector<std::pair<int, int> > sorted_pares)
{
	std::vector<int> s;
	std::vector<int> pend;
	std::vector<int> insertion_sequence;
	for (std::vector<std::pair<int, int> >::iterator it = sorted_pares.begin(); it != sorted_pares.end(); it++)
	{
		s.push_back(it->first);
		pend.push_back(it->second);
	}
	s.insert(s.begin(), pend.front());
	pend.erase(pend.begin());

	insertion_sequence = build_jacob_insertion_sequence_vector(pend.size());

	std::cout << "por aqui si pasa" << std::endl;
	int i = 0;
	for (std::vector<int>::iterator it = pend.begin(); it != pend.end(); it++)
	{
		std::vector<int>::iterator insertion_it = insertion_sequence.begin();
		std::advance(insertion_it, i);
		unsigned int index = *insertion_it;

		if (index >= s.size())
		{
			s.push_back(*it);
		}
		else
		{
			std::vector<int>::iterator insert_it = s.begin();
			std::advance(insert_it, index);
			if (it == pend.end())
			{
				std::cerr << "Error: it fuera de límites" << std::endl;
				break;
			}
			s.insert(insert_it, *it);
		}
		i++;
	}
	std::cout << "estoy llegnado hasta aqui?" << std::endl;
	std::vector<int>::iterator begin = s.begin();
	std::vector<int>::iterator end = s.end();
	while (begin != end && straggler != -1)
	{
		std::vector<int>::iterator middle = begin;
		std::advance(middle, std::distance(begin, end) / 2);

		if (straggler == *middle || (straggler < *middle && straggler > *(--middle)))
		{
			s.insert(middle, straggler);
			break;
		}
		else if (straggler < *middle)
		{
			end = middle;
		}
		else
		{
			begin = ++middle;
		}
	}
	if (begin == end)
		s.insert(begin, straggler);
	int swap = true;
	while (swap == true)
	{
		swap = false;
		for (std::vector<int>::iterator it = s.begin(); it != s.end() - 1; it++)
		{
			std::vector<int>::iterator next_it = it;
			next_it++;
			if (*it > *next_it)
			{
				int tmp = *it;
				*it = *next_it;
				*next_it = tmp;
				swap = true;
			}
		}
	}

	std::cout << "Vector ordenado: ";
	for (unsigned int i = 0; i < s.size(); i++) {
		std::cout << s[i] << " ";
	}
	std::cout << std::endl;
	print_time_to_process("vector");
}

void PmergeMe::SortVector(std::vector<int> vec)
{
	std::vector<std::pair<int, int> > pares;
	std::vector<std::pair<int, int> > sorted_pares;
	int tmp = 0;
	straggler = -1;
	if (vec.size() <= 1)
		return;

	if ((vec.size() % 2) != 0)
	{
		straggler = vec.back();
		vec.pop_back();
	}
/*     for (std::vector<int>::iterator it = vec.begin(); it != vec.end();)
	{
		pares.emplace_back(*it, *std::next(it));
		it++;
		it++;
	} */
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end();)
	{
		pares.push_back(std::make_pair(*it, *(it + 1)));
		it++;
		it++;
	}

	for (std::vector<std::pair<int, int> >::iterator it = pares.begin(); it != pares.end(); it++)
	{
		if (it->first > it->second)
		{
			tmp = it->first;
			it->first = it->second;
			it->second = tmp;
		}
	}
	while(pares.size() > 0)
	{
		tmp = 2147483647;
		int tmp2 = 2147483647;
		std::vector<std::pair<int, int> >::iterator it;
		std::vector<std::pair<int, int> >::iterator it_tmp;
		for (it = pares.begin(); it != pares.end(); it++)
		{
			if (tmp > it->second)
			{
				tmp = it->second;
				tmp2 = it->first;
				it_tmp = it;
			}
		}
		//sorted_pares.emplace_back(tmp2, tmp);
		sorted_pares.push_back(std::make_pair(tmp2, tmp));
		pares.erase(it_tmp);
		it = pares.begin();
	}
	Sortbypair_vector(sorted_pares);
}

PmergeMe::PmergeMe(char **argv)
{
	int tmp = 0;
	int i = 1;
	int j = 0;

	start_time = clock();
	while(argv[i] != NULL)
	{
		tmp = 0;
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				tmp = tmp * 10 + (argv[i][j] - '0');
				j++;
			}
			else
			{
				std::cerr << "Error: caracter inválido" << std::endl;
				std::exit(1);
			}
		}
		lst.push_back(tmp);
		dq.push_back(tmp);
		i++;
	}
	print(dq, "before", "before");
	//print(lst, "before", "before");
	//SortList(lst);
	SortDeque(dq);
	start_time = clock();
	i = 1;
	while(argv[i] != NULL)
	{
		tmp = 0;
		j = 0;
		while (argv[i][j] != '\0')
		{
			 if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				tmp = tmp * 10 + (argv[i][j] - '0');
				j++;
			}
			else
			{
				std::cerr << "Error: caracter inválido" << std::endl;
				std::exit(1);
			}
		}
		vec.push_back(tmp);
		i++;
	}
	//print(vec, "before", "before");
	//SortVector(vec);
}
