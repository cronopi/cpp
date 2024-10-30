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

    /*
    Una búsqueda binaria es un algoritmo de búsqueda que se utiliza para encontrar un elemento específico en una lista ordenada.
    El algoritmo funciona dividiendo la lista en dos partes y comparando el elemento que se busca con el elemento del medio de la lista.

    Aquí hay los pasos básicos de una búsqueda binaria:

    Se inicia con una lista ordenada de elementos.
    Se calcula el índice del medio de la lista. es middle
    Se compara el elemento que se busca con el elemento del medio de la lista.
    Si el elemento que se busca es igual al elemento del medio, se ha encontrado el elemento y se devuelve su índice.
    Si el elemento que se busca es menor que el elemento del medio, se repite el proceso con la mitad izquierda de la lista.
    Si el elemento que se busca es mayor que el elemento del medio, se repite el proceso con la mitad derecha de la lista.
    Se repite el proceso hasta que se encuentre el elemento o se determine que no está en la lista.
    */