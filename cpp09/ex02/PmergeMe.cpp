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

std::list<int> PmergeMe::build_jacob_insertion_sequence(int length)
{
    std::list<int> sequence;
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

void PmergeMe::Sortbypair(std::list<std::pair<int, int>> sorted_pares)
{
    std::list<int> s;
    std::list<int> pend;
    std::list<int> insertion_sequence;

    for(std::list<std::pair<int, int>>::iterator it = sorted_pares.begin(); it != sorted_pares.end(); it++)
    {
        pend.push_back(it->first);
        s.push_back(it->second);
    }
    s.push_front(pend.front());
    pend.pop_front();
    print(pend, "list", "pend");
    print(s, "list", "s");

    insertion_sequence = build_jacob_insertion_sequence(pend.size());

    print(insertion_sequence, "list", "insertion_sequence");

    int i = 0;
    for (auto it = pend.begin(); it != pend.end(); ++it)
    {
        auto insertion_it = insertion_sequence.begin();
        std::advance(insertion_it, i); // avanzar el iterador a la posición i
        int index = *insertion_it;
        auto insert_it = s.begin();
        std::advance(insert_it, index); // move the iterator to the correct position
        s.insert(insert_it, *it);
        i++;
    }

    /*
    Una búsqueda binaria es un algoritmo de búsqueda que se utiliza para encontrar un elemento específico en una lista ordenada.
    El algoritmo funciona dividiendo la lista en dos partes y comparando el elemento que se busca con el elemento del medio de la lista.

    Aquí hay los pasos básicos de una búsqueda binaria:

    Se inicia con una lista ordenada de elementos.
    Se calcula el índice del medio de la lista.
    Se compara el elemento que se busca con el elemento del medio de la lista.
    Si el elemento que se busca es igual al elemento del medio, se ha encontrado el elemento y se devuelve su índice.
    Si el elemento que se busca es menor que el elemento del medio, se repite el proceso con la mitad izquierda de la lista.
    Si el elemento que se busca es mayor que el elemento del medio, se repite el proceso con la mitad derecha de la lista.
    Se repite el proceso hasta que se encuentre el elemento o se determine que no está en la lista.
    */
    print(s, "final", "s");
    /*
    if (straggler != -1)
    {

    } */


}

void PmergeMe::SortList(std::list<int> arr)
{
    std::list<std::pair<int, int>> pares;
    std::list<std::pair<int, int>> sorted_pares;
    int tmp = 0;
    straggler = -1;
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
/*     for (auto& par : pares)
    {
        std::cout << "(" << par.first << ", " << par.second << ")" << std::endl;
    } */
	std::cout << std::endl;
    while (pares.size() > 0)
    {
        tmp = 2147483647;
        int tmp2 = 2147483647;
        std::list<std::pair<int, int>>::iterator it;
        std::list<std::pair<int, int>>::iterator it_tmp;
        for (it = pares.begin(); it != pares.end(); it++)
        {
            if (tmp > it->second)
            {
                tmp = it->second;
                tmp2 = it->first;
                it_tmp = it;
            }
            //std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
        }
        sorted_pares.emplace_back(tmp2, tmp);
        pares.erase(it_tmp);
        it = pares.begin();
    }
        std::cout << "sorted_pares: " << std::endl;
        for (std::list<std::pair<int, int>>::iterator it = sorted_pares.begin(); it != sorted_pares.end(); it++)
        {
            std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
        }
        Sortbypair(sorted_pares);
}

